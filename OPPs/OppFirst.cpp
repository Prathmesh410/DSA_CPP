#include <iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    void setName (string s){
        name = s;
    }
    //default
    student (){
        cout<<"Default Constuctor"<<endl;
    }
    // this is the parameterised constuctor

    student(string s, int Age,bool Gender){
        name = s;
        age =Age;
        gender=Gender;
    }

    //copy constuctor
    student(student &a){
        cout<<"Copy Constuctor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    //destructor
    ~student(){
        cout<<"destructor is called"<<endl;
    }
    void getName(){
        cout<<name;
    }
    void printinfo(){
        cout<<" Name = "<<name<<endl;
        cout<<" Age = "<<age<<endl;
        cout<<" Gender = "<<gender<<endl;

    }
    bool operator == (student &a){
        if(name==a.name && gender==a.gender && age==a.age){
            return true;
        }
        return false;
    }
};
int main(){
    // student a;
    //     a.name="Prathmesh";
    //     a.age=20;
    //     a.gender=0;

    //input by loops

    // student arr[3];
    // for(int i=0;i<3;i++){
    //     cout<<" enter the attributes of student "<<i<<endl;
    //     string s;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;

    // }

    student a("parthmesh",20,1);
   
        a.printinfo();
        //getname
        // a.getName();
        student b;


        student c= a;
        if(c==a){
            cout<<" same"<<endl;

        }
        else{ 
            cout<<" not same"<<endl;
        }
    return 0;
}