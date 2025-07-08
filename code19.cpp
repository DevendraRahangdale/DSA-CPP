#include<iostream>
#include<string>

using namespace std;
int main(){
    string str;
    cout<<"string is:";
    getline(cin,str);

    string result="";
    for(int i=0;i<str.length();i++){
        if(str[i] !='(' && str[i] !=')'){
            result +=str[i];

        } 
    }

    cout<<"ans of this string:"<<result<<endl;
}
