#include<iostream>
using namespace std;

int findpivotindex(int nums[],int n){
    
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
            }
            else if(nums[mid]>nums[mid+1]){
                return mid;

            }
            else if(nums[mid]<nums[mid-1]){
                return mid-1;
            }
            else if(nums[s]>nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    
}

int main(){

    int a[]={12,14,16,2,4,6,8,10};
    int n=8;


cout<<"pivot index is:"<<findpivotindex(a,n);
}