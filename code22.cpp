#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    string str;
    cout<<"string is:";
    getline(cin,str);
    unordered_map<char,int>mp;

    for(auto ch:str){
        mp[ch]++;
    }

for(auto it:mp){
    if(it.second==1){
        cout<<it.first<<" ";
    }
}
}