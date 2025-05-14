#include<iostream>

using namespace std;

int main(){
    int n=10;

    int x;
    cout<<"enter number you want to table:";
    cin>>x;

    for(int i=1;i<=10;i++){
        int ans=x*i;
        cout<<x<<"X"<<i<<"="<<ans<<endl;
        
    }
    
}