#include<iostream>
using namespace std;



int solve(int arr[],int size){


    //  cout<<"inside solve function ->arr:    "<<arr;
    // cout<<endl;
    //   cout<<"inside solve function ->&arr:  "<<&arr;


    *arr=*arr+1;

cout<<endl;

}
int main(){

    int arr[]={10,20,30};

    solve(arr,3);

    // cout<<"inside main function ->arr:    "<<arr;
    // cout<<endl;
    //   cout<<"inside main function ->&arr:    "<<&arr;


for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
}

}