#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"size of array:"<<endl;
    cin>>N;

    cout<<"Enter the array element :";
    int arr[1000];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    cout<<"Your array is:"<<endl;

    for(int i=0;i<N;i++ ){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    sort(arr,arr+N);
    cout<<"Your sort array is:"<<endl;

    for(int i=0;i<N;i++ ){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    int ans=arr[N-1]*arr[N-2];

    cout<<"maximum product of two element is:"<<ans<<endl;

}
