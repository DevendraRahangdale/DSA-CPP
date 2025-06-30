#include<iostream>
#include<string>
using namespace std;

int main(){

    int num;
    cout<<"enter the decimal no:";
    cin>>num;

    if(num==0){
        cout<<"binary is:"<<"0"<<endl; 
    }

    string binary="";

    while(num>0){
        binary=to_string(num%2)+binary;
        num /=2;
    }

    cout<<"binary is:"<<binary;


}