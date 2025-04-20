#include<iostream>

using namespace std;



void subarraywithsum(int arr[],int N, int k){
    int start=0,end=0,sum=0;

    while(end <N){
        sum +=arr[end];
    

    while(sum > k && start <= end ){
        sum -= arr[start];
        start++;
    }

    if(sum==k){
        cout<<"subarray found:[";
        for(int i=start;i<=end;i++){
            cout<<arr[i];
            if(i<end) cout<<",";

        }
        cout<<"]"<<end;
        return ;
    }
    end++;
    }
cout<<-1<<endl;
}

int main(){
    int N;
    cout<<"size of array:"<<endl;
    cin>>N;

    cout<<"Enter the array element :";
    int arr[10000];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    cout<<"Your array is:"<<endl;

    for(int i=0;i<N;i++ ){
        cout<<arr[i]<<" ";

    }

    int k;
    cout<<"enter value of K:";
    cin>>k;
subarraywithsum(arr,N,k);
    

}