#include<iostream>

using namespace std;

int uniquesum(int arr[],int n){
    int sum=0;

    for(int i=0;i<n;i++){
        bool isduplicate=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                isduplicate=true;
                break;
            }
        }
        if(!isduplicate){
            sum +=arr[i];
        }
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    int arr[n];
cout<<"array element:";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<endl;
    // cout<<"array element:";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }

    cout<<uniquesum(arr,n)<<endl;
}