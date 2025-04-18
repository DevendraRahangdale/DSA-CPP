#include<iostream>
#include<math.h>
#include <unordered_map>
#include<climits>

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

    cout<<endl;
    unordered_map<int,int>mp;

    for(int i=0;i<N;i++){
        mp[arr[i]]++;
    }
    
    int majorelement=-1;

    for(auto it:mp){
        if(it.second > N/2){
            majorelement=it.first;
            break;
        }
    }
    cout<<"Majortyelement:"<<majorelement;


}