#include<iostream>
using namespace std;
 
 void subsets(int a[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (i<<j))
            {
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
 }
 int main(){

    int a[5]={1,2,3,4,5};
    subsets(a,5);
    return 0;
 }