#include<iostream>
using namespace std;

bool isprime(int N){

    if(N<=1){
        return false;
    }

    for(int i=2;i*i<=N;i++){
        if(N%i==0)
            return false;
        
        
    }
    return true;
}

int main(){
    int N,M;
    cout<<"Enter value of N:";
    cin>>N;
    cout<<"Enter value of M:";
    cin>>M;

    int sum=0;
    while(N<=M){
        if(isprime(N)){
            sum+=N;
        }
        N++;
    }
    cout<<"Sum:"<<sum;

}