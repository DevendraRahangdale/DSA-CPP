#include<iostream>
using namespace  std;

void bubblesort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){

       
        if (a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            
        }
    }
}
 }

void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={5,4,3,2,1};
    int n=5;

    bubblesort(a,n);
    printarray(a,n);

    
}
