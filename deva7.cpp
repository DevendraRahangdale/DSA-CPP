#include<iostream>
#include<math.h>
#include<climits>

using namespace std;

int main(){

    int N;
    cout<<"size of array:"<<endl;
    cin>>N;

    cout<<"Enter the array element :";
    int arr[100000];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    cout<<"Your array is:"<<endl;

    for(int i=0;i<N;i++ ){
        cout<<arr[i]<<" ";
    }


    // find min and max element in array

    int mini=INT_MAX;
    int maxi=INT_MIN;

    for(int i=0;i<N;i++){
        if(arr[i] <mini) mini=arr[i];
        if(arr[i]> maxi) maxi=arr[i];

    }

    cout<<"ans :"<<maxi-mini<<endl;



}
