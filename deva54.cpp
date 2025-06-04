#include<iostream>
#include<vector>
using namespace std;


void findsubarrywithsum(int arr[], int n,int target){
    int start=0;
    int currentsum=0;

    for(int end=0;end<n;end++){
        currentsum +=arr[end];

        while (currentsum > target && start <end){
            currentsum -=arr[start];
            start++;
        }
        if(currentsum==target){
            cout<<"["<<start+1<<","<<end+1<<"]"<<endl;
            return ;
        }
        
    }
}



 int main(){
    int n;
    cout<<"enter size of array::";
    cin>>n;

    int arr[1000];

    cout<<"array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"enter target:";
    cin>>target;

    findsubarrywithsum( arr, n,target);

   
 }