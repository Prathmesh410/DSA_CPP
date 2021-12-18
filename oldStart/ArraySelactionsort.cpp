#include <cstdlib> #include "iostream" using namespace std; typedef struct node
{

char data;

struct node * left; struct node * right;
} node;

typedef struct stacknode

{

node * data;

struct stacknode *next;

} stacknode;
 
class stack

{

stacknode *top; public:
stack()

{

top = NULL;

}

node* topp()

{

return top->data;

}

int isempty()

{

if (top == NULL)

{

return 1;

}

return 0;

}

void push(node* a)

{

stacknode *q;
 
q = new stacknode(); q->data = a;
q->next = top; top = q;
}

node* pop()

{

stacknode *q; node* x;
x = top->data; q = top;
top = top->next; return x;
}

};

node* create_pre(char prefix[20]); node* create_post(char postfix[30]); void inorder_non_recursive(node *m); void inorder(node *q);
void preorder(node *q); void postorder(node *q);
void preorder_non_recursive(node* m); void postorder_non_recursive(node *m);
 
node* create_post(char postfix[20])

{

node *q; stack s1;
for (int i = 0; postfix[i] != '\0'; i++)

{

char token = postfix[i]; if (isalnum(token))
{

q = new node(); q->data = token; q->left = NULL;
q->right = NULL; s1.push(q);
}

else

{

q = new node(); q->data = token;
q->right = s1.pop(); q->left = s1.pop(); s1.push(q);
}
 
}

return s1.pop();

}

node* create_pre(char prefix[20])

{

node *q; stack s1; int i;
for (i = 0; prefix[i] != '\0'; i++) {

}

i = i - 1;

for (; i > 0; i--)

{

char token = prefix[i]; if (isalnum(token))
{

q = new node(); q->data = token; q->left = NULL;
q->right = NULL; s1.push(q);
}

else
 
{

q = new node(); q->data = token;
q->left = s1.pop(); q->right = s1.pop(); s1.push(q);
}

}

return s1.pop();

}

void inorder(node *q)

{

if (q != NULL)

{

inorder(q->left); cout << q->data; inorder(q->right);
}

}

void preorder(node *q)

{

if (q != NULL)

{
 
cout << q->data; preorder(q->left); preorder(q->right);
}

}

void postorder(node *q)

{

if (q != NULL)

{

postorder(q->left); postorder(q->right); cout << q->data;
}

}

void inorder_non_recursive(node *m)

{

stack s1;

while (m != NULL)

{

s1.push(m); m = m->left;
}

while (s1.isempty() != 1)
 
{

m = s1.pop(); cout << m->data; m = m->right;
while (m != NULL)

{

s1.push(m); m = m->left;
}

}

}

void preorder_non_recursive(node *m)

{

stack s1;

while (m != NULL)

{

cout << m->data; s1.push(m);
m = m->left;

}

while (s1.isempty() != 1)

{

m = s1.pop();
 
m = m->right; while (m != NULL)
{

cout << m->data; s1.push(m);
m = m->left;

}

}

}

void postorder_non_recursive(node *m)

{

stack s1, s2; node *m1;
while (m != NULL)

{

s1.push(m); s1.push(NULL); m = m->left;
}

while (s1.isempty() != 1)

{

m = s1.pop();

m1 = s1.pop();
 
if (m1 == NULL)

{

s1.push(m); s2.push((node *) 1); m = m->right; while (m != NULL)
{

s1.push(m); s2.push(NULL); m = m->left;
}

}

else

{

cout << m->data;

}

}

}

int main()

{

node *r = NULL, *r1;

char postfix[20], prefix[20]; int x;
 
int ch, choice; do
{

cout << " \t ###### "" TREE OPERATIONS "" ###### " << endl;

cout << "(1) Constructing tree from postfix expression / prefix expression " << endl; cout << "(2) In-order Traversal of Tree" << endl;
cout << "(3) Pre-order traversal" << endl; cout << "(4) Postorder traversal" << endl; cout << "(5) xxx EXIT xxx" << endl; cout << "Enter your choice :- ";
cin >> ch; cout << endl; switch (ch)
{

case 1:

cout << "(1) Postfix expression" << endl; cout << "(2) Prefix expression" << endl; cout << "ENTER YOUR CHOICE :";
cin >> choice; cout << endl;
if (choice == 1)

{

cout << "Enter postfix expression : " << endl;
 
cin >> postfix;

r = create_post(postfix);

}

else

{

cout << "Enter prefix expression : " << endl; cin >> prefix;
r = create_pre(prefix);

}

cout << endl;

cout << "Tree is created successfully " << endl; cout << endl;
break; case 2:
cout << "In-order Traversal of Tree with recursion : "; inorder(r);
cout << endl;

cout << "In-order Traversal of Tree without recursion : "; inorder_non_recursive(r);
cout << endl; cout << endl; break;
case 3:
 
cout << "Pre-order traversal with recursion of tree "; preorder(r);
cout << endl;

cout << "Pre-order traversal without recursion : "; preorder_non_recursive(r);
cout << endl; cout << endl; break;
case 4:

cout << "Post-order traversal with recursion of tree : "; postorder(r);
cout << endl;

cout << "Post-order traversal without recursion of tree : "; postorder_non_recursive(r);
cout << endl; cout << endl; break;
}

} while (ch != 10); return 0;
}
 
