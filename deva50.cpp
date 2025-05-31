#include<iostream>
using namespace std;
 
int main(){


        int n;
        cout<<"enter the size of array:";
        cin>>n;
int arr[n];

        cout<<"array element:";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"array element are:";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;

int count=0;

for(int i=0;i<n;i++){
    if(arr[i] < arr[i+1]){
        count++;
    }
}

cout<<"ans:"<<count<<endl;

    }
