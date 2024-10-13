#include<iostream>
using namespace std;



int slowexponentiation(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
ans=ans*a;
    }
    return ans;
}


int fastexponentiation(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=ans*a;
        }
        a=a*a;
        b>>=1;
    }
    return ans;
}










    int main(){
        cout<<slowexponentiation(5,4)<<endl;
        cout<<fastexponentiation(5,4);
        return 0;
    
}