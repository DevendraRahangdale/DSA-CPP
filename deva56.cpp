#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"string:";
    getline(cin,s);d

    string ans="";
int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i] <='z'){
            ans+=s[i];
            count++;
        }
    }

    cout<<"ans:"<<ans<<" :::"<<count;



}