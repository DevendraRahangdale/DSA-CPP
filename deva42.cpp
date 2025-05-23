#include<iostream>
using namespace std;

int main(){

    string num1;
    cout<<"enter the num1 string:";
    cin>>num1;

    string num2;
    cout<<"enter the num2 string:";
    cin>>num2;


    string result="";

    for(int i=0;i<num1.length();i++){
        if(num2[i] =='1'){
            result +=num1[i];
        }

    }
    cout<<"result:"<<result;
}
