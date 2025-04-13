#include<iostream>
using namespace std;

int main(){

    int N;
    cout<<"enter value of N:";
    cin>>N;

    int arr[90];
int sum=0;
    for(int i=0;i<N;i++){
       arr[i]=10*(i+1);
    }

    for(int i=0;i<N;i++){
        sum +=arr[i];
    }
    cout<<"Sum:"<<sum<<endl;
}