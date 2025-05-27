#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[10000];

    cout<<"enter array element:";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int evensum=0;
    int oddsum=0;

    for(int i=0;i<n;i++){
        if(arr[i] %2==0){
            evensum +=arr[i];
        }
        else{
            oddsum+=arr[i];
        }
    }
    cout<<"evensum:"<<evensum<<endl;
    cout<<"oddsum:"<<oddsum<<endl;


}