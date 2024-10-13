#include<iostream>
#include<cmath>
using namespace std;
// decimal To Binary
// by division method

// int decimaltobinarymethod1(int n){

// int binaryno=0;
// int i =0;

    
//     while(n>0){
//         int bit=n%2;
//         binaryno=bit*pow(10,i++)+binaryno;
//         n=n/2;
//     }
//     return binaryno;
// }


// by Bitwise method
int decimaltobinarymethod2(int n){

int binaryno=0;
int i =0;

    
    while(n>0){
        int bit=(n & 1);
        binaryno=bit*pow(10,i++)+binaryno;
        n=n >> 1;
    }
    return binaryno;
}
int main(){
int n;
cout<<"enter value of n:"<<endl;
cin>>n;

cout<<"binary is:"<<decimaltobinarymethod2( n);
}