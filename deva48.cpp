#include<iostream>
#include <climits>  // for INT_MIN
using namespace std;

int main(){

    int n;
    cout<<"enter the size of array:";
    cin>>n;

    int arr[n];

cout<<"enter array element:";
     for(int i=0;i<n;i++){
 cin>>arr[i];
    }

// ******************************************Method 1*******************************************************
//     vector<int>arr(n);
//     cout<<"enter array element:";
//     for(int i=0;i<n;i++){
// cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
//     cout<<"second larget element in array is:"<<arr[n-2];

// ****************************************************Method 2**************************************************

int largest=INT_MIN;
int second_larget=INT_MIN;

for(int i=0;i<n;i++){
    if(arr[i] >largest){
        second_larget=largest;
        largest=arr[i];

    }
    else if(arr[i]!=largest && arr[i]>second_larget){
        second_larget=arr[i];

    }
}
if(second_larget ==INT_MIN){
cout<<"no element in second largets in array (might all elements are equal)";

}
else{
    cout<<"second largets element is:"<<second_larget;
}




}