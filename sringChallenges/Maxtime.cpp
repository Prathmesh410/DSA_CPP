#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s= "sfdfsdffsdfesdfhjjhfhg";
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;

    }
    char ans = 'a';
    int mx = 0;
    for (int i=0;i<26;i++){
        if(freq[i]>mx){
            mx=freq[i];
            ans = i+'a';
        }
    }
    cout<<mx<<" "<<ans<<endl;


    return 0;

}