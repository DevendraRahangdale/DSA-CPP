#include<iostream>
#include<vector>

using namespace std;

int main(){

    int N,M;
    cout<<"size of arr1 and arr2:"<<endl;
    cin>>N>>M;

    int arr1[N],arr2[M];

    cout<<"Enter the arr1 element :";

    for(int i=0;i<N;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the arr2 element :";

    for(int i=0;i<M;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<N;i++){
        bool present=false;
        for(int j=0;j<M;j++){
            if(arr2[j]==arr1[i]){
                present=true;;
                break;
            }
        }
        if(present==false) {
            cout<<"arr1 is not subset of arr2";
            return 0;
        }
    }
    cout<<"arr1 is subset of arr2";

}