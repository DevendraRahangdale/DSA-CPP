#include<iostream>
using namespace std;

// int getquotient(int dividend,int divisor){
//     int s=0;
//     int e=dividend-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(mid*divisor==dividend){
//             return mid;
//         }
//         else if(mid*divisor<dividend){
//             ans=mid;
//             s=mid+1;
//         }
//         else {
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }


int searchnearlysorted(int a[],int target,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){

        if(mid-1>=0 && a[mid-1]==target){
            return mid-1;
        }
        if(a[mid]==target){
            return mid;
        }
        if(a[mid+1]==target){
            return mid+1;
        }
        if(target>a[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return -1;
}


int findoddoccuringelement(int a[],int n){
     int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        // single element case
        if(s==e){
            return s;
        }
        // if mid present in odd location
        if(mid & 1){// if true->odd else even
if(a[mid-1]==a[mid]){
    // right me jao
    s=mid+1;
}
else{
    e=mid-1;
}
        }
        else{
            //even case
            if(a[mid]==a[mid+1]){
                // riight me jao
                s=mid+2;
            }
            else{
                //  ya to mai right part pe khada hu
                //ya to mai ans ke upper khada hu
                //that's why mid kr rha hu
                // e=mid-1 se ans lost ho sakta hai

                e=mid;
            }

        }
        mid=s+(e-s)/2;
    }
    return -1;

}












int main(){
//     int dividend=-29;
//     int divisor=-7;
// int n=-5;
// cout<<abs(n)<<endl;
//     int ans=getquotient(abs(dividend),abs(divisor));
//     if((divisor>0 && dividend<0)||(divisor>0 && dividend<0)){
// ans=0-ans;
//     }
//     cout<<"final ans:"<<ans;


int a[]={20,20,30,30,40,70,70};

int n=7;
// int target=30;
// int ans=searchnearlysorted(a,target,n);
// cout<<"index of element:"<<ans;
int ans =findoddoccuringelement(a,7);
// cout<<"single element is:"<<ans;
cout<<"final ans is:"<<a[ans];

}
