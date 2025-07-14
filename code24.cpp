#include<iostream>
#include<math.h>
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

    int maxfreq=0;
    char ans=' ';
    for(auto it:mp){
        if(it.second >maxfreq){
            maxfreq=it.second;
            ans=it.first;

        }
    }

cout<<"most frequent character is:"<<ans<<endl;
cout<<"freqency of that character"
}