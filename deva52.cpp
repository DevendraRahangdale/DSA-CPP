#include<iostream>
#include<algorithm>
using namespace std;

int findtripletcount(int arr[], int n){
    sort(arr,arr+n);

    int count=0;


    for(int k=n-1;k>=2;k--){
        int i=0,j=k-1;
        while(i <j){
            int sum=arr[i]+arr[j];
            if(sum==arr[k]){
                count++;
                i++;
                j--;
            }
            else if(sum<arr[k]){
                i++;

            }
            else{
                j--;
            }
        }
    }
    return count;
    
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

    int ans=findtripletcount(arr,n);

    cout<<"total no of triplet is:"<<ans<<endl;



}