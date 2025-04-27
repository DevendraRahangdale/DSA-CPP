#include<iostream>
using namespace std;

int main(){
    int N,M;

    cout<<"Enter the value of N and M:";
    cin>>N>>M;

    int i=N;
    int sum=0;
    while(i<=M){
        sum +=i;
        i++;
    }
    cout<<"sum:"<<sum<<endl;

}