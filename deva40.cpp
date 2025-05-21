#include<iostream>

using namespace std;

int digitmultiplication(int N){
    int mul=1;
    while(N>0){
        mul *=N%10;
        N /=10;
    }
    return mul;
}

int main(){

    int n;
    cout<<"enter the number:";
    cin>>n;


    int ans=digitmultiplication(n);
    cout<<"miltiplication of each digit:"<<ans;

}