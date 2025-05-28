#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N,K;

    cout<<"enter the value of N and K:"<<endl;
    cin>>N>>K;

    vector<int>arr(N);
    cout<<"enter array elements:";
    for(int i=0;i<N;i++){
        cin>>arr[i];

    }

    sort(arr.begin(),arr.end());

    vector<int>ans(arr.end()-K,arr.end());

    cout<<"ans:[";
    for(int i=0;i<K;i++){
        cout<<ans[i];
        if( i !=K-1){
            cout<<",";
        }

    }
    cout<<"]"<<endl;

   


}