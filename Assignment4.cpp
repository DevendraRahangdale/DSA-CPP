#include<iostream>
using namespace std;

int binarySearch(int a[],int low,int high,int x){
         
       int mid=low+(high-low)/2;
         while(low<=high){
    if(a[mid]<x){
        low=mid+1;
    }
    else if(a[mid]==x){
        return mid;

    }
    else{
        high=mid-1;
    }
    
    mid=(low+high)/2;
}

    }


    int exponenetialsearch(int a[],int n, int x){
        if(a[0]==x){
            return 0;

        }
        int i=1;

        while(i<n && a[i]<=x){
            i=i*2;
        }
        return binarySearch(a,i/2,min(i,n-1),x);

    }

int main(){



    

    int a[]={2,3,4,5,6,11,12,13,14,56,70};
    int n=11;
    int x=13;


    int ans= exponenetialsearch(a, n, x);
    cout<<"ans:"<<ans;
}