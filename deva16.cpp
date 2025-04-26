#include<iostream>
#include<vector>

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

    int target;
    cout<<"enter the target:";
    cin>>target;


    vector<pair<int,int>>ans;

    for(int i=0;i<N;i++){
      for(int j=i+1;j<N;j++){

        if(arr[i]+arr[j]==target){
ans.push_back({i,j});
        }
      }
        
    }
    if(ans.empty()){
        cout<<"no pair found that sum to the target"<<endl;
    }else{
        cout<<"index pair of index:";
        for(auto p:ans){
            cout<<"("<<p.first<<","<<p.second<<")"<<endl;
        }
    }
return 0;
}