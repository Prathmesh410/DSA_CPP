#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl;
    }
    for(auto element:vec){
        cout<<element<<endl;
    }
    vec.pop_back();

    vector<int> vec2(3,50);

    for(auto element:vec2){
        cout<<element<<endl;
    }




    return 0;
}