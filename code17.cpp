#include<iostream>
#include<string>
using namespace std;

string onlycharacter(string s){

    string result=" ";

    for(int i=0;i<s.length();i++){
        int ASCII=int(s[i]);

        if((ASCII>=65 && ASCII<=90)|| (ASCII >=90 && ASCII <=122)){
            result +=s[i];
        }
    }

    return result;
}

int main(){

    string str;
    cout<<"string is:";
    getline(cin,str);

    string ans=onlycharacter(str);

    cout<<"ans of this string:"<<ans<<endl;
}