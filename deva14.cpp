#include<iostream>
#include<math.h>
#include <vector>
#include<climits>

using namespace std;

int main(){

    int N;
    cout<<"size of array:"<<endl;
    cin>>N;

    if(N<=0){
        cout<<"-1"<<endl;
        return 0;
    }

    cout<<"Enter the array element :";
    int arr[100000];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    cout<<"Your array is:"<<endl;

    for(int i=0;i<N;i++ ){
        cout<<arr[i]<<" ";
    }

    int result=-1;
    bool found=false;

for(int i=0;i<N;i++){
    
        if(!found){
            result=arr[i];
            found=true;
        }
        else{
            result |=arr[i];
        
    }
}
cout<<endl;
cout<<"ans is:";
cout<<(found ? result:-1)<<endl;

}