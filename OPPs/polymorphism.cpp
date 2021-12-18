// #include <iostream>
// using namespace std;

// class A {
//     public:
//     void fun(){
//         cout<<" without arguments"<<endl;
//     };
//     void fun(string name){
//         cout<<" with the string "<<name<<endl;
//     };
//     void fun(int n){
//         cout<<" with int "<<n<<endl;
//     };
// };



// int main(){
//     A obj;
//     obj.fun();
//     obj.fun("prathmesh");
//     obj.fun(30);
// }


//operator overloading

// #include<iostream>
// using namespace std;


// class Complex{
//     private:
//     int real,imag;
//     public:
//         Complex(int r=0,int i=0){
//             real=r;
//             imag=i;
//         };
//     Complex operator+ (Complex const &obj){
//         Complex res;
//         res.imag=imag+obj.imag;
//         res.real=real+obj.real;
//         return res;
//     };
//     void display(){
//         cout<<real<< " +i"<<imag<<endl;
//     };
// };
// int main(){
//     Complex c1(12,7),c2(6,7);
//     Complex c3=c1+c2;
//     c3.display();
//     return 0;

// }

//virtual

#include<iostream>
using namespace std;
class base {
    public:
    //virtual 
    virtual void print(){
        cout<<"this is the base class print fun"<<endl;
    }
    void display(){
        cout<<"this is the base class display fun"<<endl;
    }
};
class derived: public base{
    public:
    void print(){
        cout<<"this is the derived class print fun"<<endl;
    }
    void display(){
        cout<<"this is the derived class display fun"<<endl;
    }
};
int main(){
    base *baseptr;
    derived d;
    baseptr =&d;
    baseptr->print();
    baseptr->display();
    return 0;
}