#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"string is:";
    getline(cin,str);

    stack<char>st;

    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }

    vector<char>v;
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();

    }

    for(auto i:v){
        cout<<i;
    }

}