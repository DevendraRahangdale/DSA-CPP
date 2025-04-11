#include<iostream>
using namespace std;

int main(){
    int N,M;
    cout<<"enter value of N:";
    cin>>N;
    cout<<"Enter value of M:";
    cin>>M;
int sum=0;
int i=N;
    while(i<=M){
        sum+=(i*i*i);
        i++;
    }
    cout<<"sum of cube:"<<sum;

}