#include<iostream>

using namespace std;

int main(){

    int N;
    cout<<"Enter the three digit no.:";
    cin>>N;

    if(N%9==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

int i=2;
int ans=0;
    while(i<N){
        if(N%i==0){
            ans=i;
        
        }
        i++;
        
    }
    cout<<ans<<endl;
}