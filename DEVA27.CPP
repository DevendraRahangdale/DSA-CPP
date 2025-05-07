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

    vector<int>ans;
    for(auto m:mp){
        if(m.second %2==0){
ans.push_back(m.first);
        }
        

    }

cout<<"even no elemnt is:"<<endl;
for(auto x:ans){
    cout<<x<<endl;
}


}