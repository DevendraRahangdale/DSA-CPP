#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    string s;
    cout<<"enter the string :";
    cin>>s;


    cout<<"string is:";

    map<char,int>mp;

    for(auto x:s){
        mp[x]++;
    }
vector<char>ans;
    for(auto p:mp){
        if(p.second >=2){
         ans.push_back(p.first);
        }
    }

for(auto y:ans){
    cout<<y;
}

    

}