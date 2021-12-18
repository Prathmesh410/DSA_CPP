
// #include<stack>
// using namespace std;

// class que{
//     stack<int> s1;
//     stack<int> s2;
// public:
// void push(int val){
//     s1.push(val);
// }
// int pop(){
//     if(s1.empty() && s2.empty()){
//         cout<<"no element"<<endl;
//         return -1;
//     }
//     if(s2.empty()){
//         while (!s1.empty())
//         {
//             s2.push(s1.top());
//             s1.pop();
//         }
        
//     }
//     int topval =s2.top();
//     s2.pop();
//     return topval;


// }
// bool empty(){
//     if(s1.empty() and s2.empty()){
//         return true;
//     }
//     return false;
// }

// };


// int main(){
//     que q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
  
//    cout<< q.pop()<<endl;
// q.push(5);
// cout<< q.pop()<<endl;
// cout<< q.pop()<<endl;
// cout<< q.pop()<<endl;
// cout<< q.pop()<<endl;
//     return 0;
// }







//using call stack

// #include<iostream>
// #include<stack>
// using namespace std;

// class que{
//     stack<int> s1;
   
// public:
// void push(int val){
//     s1.push(val);
// }
// int pop(){
//     if(s1.empty()){
//         cout<<"no element"<<endl;
//         return -1;
//     }
//     int x=s1.top();
//     s1.pop();
//     if(s1.empty()){//base
//         return x;
//     }
//     int item=pop();//fuction 
//     s1.push(x);
//     return item;
    


// }
// bool empty(){
//     if(s1.empty()){
//         return true;
//     }
//     return false;
// }

// };


// int main(){
//     que q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
  
//    cout<< q.pop()<<endl;
// q.push(5);
// cout<< q.pop()<<endl;
// cout<< q.pop()<<endl;
// cout<< q.pop()<<endl;
// cout<< q.pop()<<endl;
//     return 0;
// }





#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class Stack {
    int N;
    queue<int> q1;
    queue<int> q2;
    public: 
    Stack(){
        N=0;
    }

    void pop(){
        if(q1.empty()){
            return;
        }
        while (q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }

    void push(int val){
        q1.push(val);
        N++;
    }

    int top(){
        if(q1.empty()){
            return -1;
        }
        while (q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q2.push(ans);
        
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        return ans;

    }

    int size(){
        return N;
    }
};



int main(){
   Stack st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);


   cout<<st.top()<<endl;
   st.pop();
   cout<<st.top()<<" "<<st.size();

    return 0;
}