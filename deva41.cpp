#include<iostream>

using namespace std;
int main(){

    int n,m;
    cout<<"enter the value of n and m:";
    cin>>n>>m;

    int ans=0;
    if(n<m){
ans=(360*(m-n))/12;
    }
    else{
        ans=(360+(12-n+m))/12;
    }

    cout<<"ans:"<<ans;
}