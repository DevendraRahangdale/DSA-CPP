#include<iostream>

using namespace std;

void movezerotoend(int arr[],int n){
    int j=0;

    for(int i=0;i<n;i++){

        if(arr[i] !=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}


int main(){

    int n;
    cout<<"enter the array element:";
    cin>>n;

    int arr[1000];
    cout<<"array element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    cout<<"array that shift all zero at the end:";

    movezerotoend(arr,n);

    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;
   
  
}
