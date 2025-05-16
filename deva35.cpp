#include<iostream>
#include<array>

using namespace std;


int maxsubarray(int arr[],int n){
int maxsum=arr[0];

int currentsum=arr[0];

for(int i=1;i<n;i++){
    currentsum=max(arr[i]+currentsum,arr[i]);

    maxsum=max(maxsum,currentsum);
}

return maxsum;
}

int main(){

    int n;
    cout<<"size of array:";
    cin>>n;

    int arr[n];

    cout<<"array element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"max sum of subarray:"<<maxsubarray(arr,n);

}