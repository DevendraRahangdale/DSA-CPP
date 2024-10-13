#include<iostream>
using namespace std;
int main(){
    int n,i,a[100],item,mid,first,last;

    cout<<"enter no. of element present in array:";
    cin>>n;

    cout<<"enter array element:";

    for(i=0;i<=n;i++){
    cin>>a[i];
    }
    cout<<"enter searching element:";
    cin>>item;
    first=0;
    last=n-1;
    mid=(first+last)/2;
    
    while(first<=last){

        if(a[mid]<item){
        first=mid+1;
        }
        
        else if(a[mid]==item){ 
            
            cout<<"item is present in location:"<<mid+1<<endl;
            
           
            break;
        }
        else{
            last=mid-1;
             }
            mid=(first+last)/2;
    
    }

    if(first>last){
cout<<"item is not present in array";
}



return 0;
}