#include<iostream>
#include<string>
using namespace std;


bool isvowel(char ch){
    ch=tolower(ch);

    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'; 

}

string withoutvowel(string s){

    string result="";

    for(auto x:s){
        if(!isvowel(x)){
            result +=x;
        }
    }

    return result;
}



int main(){

    string str;
    cout<<"string is:";
    getline(cin,str);

    string ans=withoutvowel(str);

    cout<<"ans of this string:"<<ans<<endl;
}