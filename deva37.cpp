#include<iostream>

using namespace std;
int main(){

    int n;
    cout<<"enter the array element:";
    cin>>n;

    int arr[n];
    cout<<"array element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count=0;

  for(int i=0;i<n;i++){
    int j=i+1;
    if(arr[i]<arr[j]){
        count++;
    }
  }
  cout<<"count:"<<count<<endl;
}
