#include<iostream>
using namespace std;

void sortnegativeandpositive(int a[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        
        if(a[i]<0){
            swap(a[i],a[j]);
            j++;
        }
    }
}

void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){

int arr[]={23,-7,10,-8,0,67,-11};
int n=7;
sortnegativeandpositive(arr,n);
printarray(arr,n);








}
