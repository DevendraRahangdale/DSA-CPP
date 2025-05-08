#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    int arr[n];
cout<<"array element:";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int>mp;

    for(auto p:arr){
        mp[p]++;
    }
int ans=0;
    for(auto x:mp){
        if(x.second ==1){
           ans=x.first;
        }
    }
    cout<<"ans:"<<ans<<endl;
}