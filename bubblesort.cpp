#include<iostream>
using namespace std;
int main(){
    int n ,i,a[100],j;
    cout<<"enter no of element in the array:";
    cin>>n;
    cout<<"enter array element:";

    for(i=0;i<n;i++){
        cin>>a[i];

    }
    
for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
}
cout<<"sorted array:";
for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}