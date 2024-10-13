#include<iostream>
#include<cmath>
using namespace std;

int binarytodecimal(int n){

int decimal=0;
int i=0;
while(n){
int bit=n%10;
decimal=decimal+bit*pow(2,i++);
n=n/10;
}

    return decimal;
}
int main(){
int binaryno;
cout<<"enter binary no.;";
cin>>binaryno;
cout<<"decimal is:"<<binarytodecimal(binaryno);
}