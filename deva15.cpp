#include<iostream>
using namespace std;

bool isprime(int N){
    if(N<=1) return false;
    for(int i=2;i*i<=N;i++){
        if(N%i==0) return false;
    }
    return true;
}


int main(){

    int M,N;
    cout<<"Enter value of M,N:";
    cin>>M>>N;
    int primeindex=0;
    int curr=2;
    int sum=0;

    while(primeindex < M+N){
        if(isprime(curr)){
            primeindex++;
if(primeindex >=M && primeindex <= M+N){
    sum+=curr;
}

        }
        curr++;
    }


    cout<<"sum:"<<sum<<endl;
    return 0;
}