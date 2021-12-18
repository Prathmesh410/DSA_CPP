#include <iostream>
using namespace std;
class A{
   public:
    int a;
    void funa(){
        cout<<"Fun a";
    }
   private:
    int b;
    void funb(){
        cout<<"Fun b";
    }
   protected:
    int c;
    void func(){
        cout<<"Fun c";
    }

};

int main(){
    A obj;
    obj.funa();
    // obj.funb();
    // obj.func();
}
