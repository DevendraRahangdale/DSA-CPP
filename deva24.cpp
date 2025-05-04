#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


bool anagram( const string &s1 ,const string &s2){

    if(s1.empty() || s2.empty() || s1.length() != s2.length()){
        cout<<"Invalid string"<<endl;
        return false;
    }

    unordered_map<char,int>mp;

    for(char c:s1){
        mp[c]++;
    }

    for(char c:s2){
        if(mp.find(c)==mp.end()|| mp[c]==0){
            cout<<"false"<<endl;
            return false;
        }
        mp[c]--;
    }
    cout<<"true"<<endl;
    return true;


}

int main(){
    string s1,s2;
cout<<"String s1 is:";
cin>>s1;
cout<<"string s2 is:";
cin>>s2;

anagram(s1,s2);

return 0;


}