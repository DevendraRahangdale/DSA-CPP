#include<iostream>
#include<string>
using namespace std;

string withoutspace(string s){

    string result="";

    for(auto x:s){
        if(x !=' '){
            result +=x;
        }
    }

    return result;
}

int main(){

    string str;
    cout<<"string is:";
    getline(cin,str);

    string ans=withoutspace(str);

    cout<<"ans of this string:"<<ans<<endl;
}