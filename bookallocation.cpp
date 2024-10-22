#include<iostream>
using namespace std;


bool ispossible(int a[],int n,int m,int mid){
    int studentcount=1; 
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+a[i]<=mid){
            pagesum=pagesum+a[i];
        }
        else{
            studentcount++;
            if(studentcount>m || a[i]>mid){
                return false;

        }

        pagesum=a[i];
        } 
    }
    return true;
}
int bookallocate(int a[],int n,int m){
    int first=0;
    int sum=0;
    
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    int last=sum;
    int ans=-1;
    int mid=first+(last-first)/2;
    while(first<=last){
        if(ispossible(a,n,m,mid)){
            ans=mid;
            last=mid-1;
        }
        else{
            first=mid+1;
        }
 mid=first+(last-first)/2;

    }
    return ans;
}
int main(){
    int a[4]={10,20,30,40};
    cout<<"minimum no of pages:"<<bookallocate(a,4,2)<<endl;
}
