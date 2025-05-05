#include<iostream>
using namespace std;


int main(){

    int a,b;
    cout<<"enter the value of a and b:";
    cin>>a>>b;


    int sum=0;
    for(int i=0;i<b;i++){
        sum +=a;

    }
    cout<<"multiplication of a and b:"<<sum<<endl;
}