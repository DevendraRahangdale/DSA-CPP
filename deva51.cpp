#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"enter size of array::";
    cin>>n;

    int arr[1000];

    cout<<"array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int totalsum=0;

    for(int i=0;i<n;i++){
        totalsum +=arr[i];
    }

int leftsum=0;

for(int i=0;i<n;i++){
    int rightsum=totalsum-leftsum-arr[i];

    if(leftsum==rightsum){
        cout<<"ans:"<<i<<endl;
        return 0;
    }
    leftsum +=arr[i];

}
cout<<"ans:-1"<<endl;
    
}