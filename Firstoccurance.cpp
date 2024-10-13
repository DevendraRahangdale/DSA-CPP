#include<iostream>
using namespace std;
//*******************************************************************************************************
int firstoccurance(int a[],int n,int target){
    int low=0;
int last=n-1;
int mid=low+(last-low)/2;
int ans=-1;
     while(low<=last){   
 if(a[mid]==target){
  ans=mid;
  last=mid-1;
  }
   else if(a[mid]<target){
          low=mid+1;
      }
      else{
          last=mid-1;
      }
      mid=(low+last)/2;
  }
  cout<<ans;
}

//*****************************************************************************************************
int lastoccurance(int a[],int n,int target){
  int low=0;
int last=n-1;
int mid=low+(last-low)/2;
int ans=-1;

while(low<=last){   
 if(a[mid]==target){
 ans=mid;
 low=mid+1;
 }
  else if(a[mid]<target){
         low=mid+1;
     }
     else{
         last=mid-1;
     }
     mid=low+(last-low)/2;
 }
  cout<<ans;




}
//*********************************************************************************************************

int totaloccuranc(int a[],int n,int target){
int last=lastoccurance(a,n,target);
int first=firstoccurance(a,n,target);

int totaloccurance=last-first+1;


cout<<"totaloccurance:"<<totaloccurance;


}
//**********************************************************************************************************

int  missingelemet(int a[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;


    while(s<=e){
        int diff= a[mid]-mid;

        if(diff==1){
            // right me jao
            s=mid+1;
        }
        else{
            ans=mid;
            //left me jao
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }

    if(ans+1==0){
        return n+1;
    }
    return ans+1;


}












int main(){
int a[]={1,2,3,4,6,7,8,9};
int n=8;
// int target=30;
// firstoccurance( a, n, target);
// totaloccuranc(a,n,target);

cout<<"missing element:"<<missingelemet(a,n);


// FIRST OCCURANCE




// LAST OCCURANCE













}