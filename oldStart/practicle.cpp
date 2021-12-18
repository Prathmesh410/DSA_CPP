#include <cstdlib>;
 #include <iostream>;
 using namespace std; typedef struct node
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

node* create_pre(char prefix[20]);
node* create_post(char postfix[30]); 
void postorder(node *q);

 
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

 

int main()

{

node *r = NULL, *r1;

char postfix[20], prefix[20]; int x;
 
int ch, choice; do
{

cout << " \t ###### "" TREE OPERATIONS "" ###### " << endl;

cout << "(1) Constructing tree from postfix expression / prefix expression " << endl; 
 
cout << "(2) Postorder traversal" << endl; 
cout << "(3) xxx EXIT xxx" << endl; cout << "Enter your choice :- ";
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
break;

case 2:

cout << "Post-order traversal with recursion of tree : "; postorder(r);
cout << endl;

 break;
}

} while (ch != 10); return 0;
}
