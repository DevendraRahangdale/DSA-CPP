#include<iostream>
#include<limits.h>
using namespace std;

// void solve(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }







// //present->true
// //absent->false
// bool linearsearch(int a[],int n,int item){
// for(int i=0;i<n;i++){
//     if(a[i]==item){
//         return true;
//     }
// }
// return false;
// }





// void countzeroone(int a[],int n){
//     int zerocount=0;
//     int onecount=0;
//     for(int i=0;i<n;i++){
//         if(a[i]==0){
//             zerocount++;
//         }
//         if(a[i]==1){
//             onecount++;
//         }
//     }
//     cout<<"zerocount:"<<zerocount;
//     cout<<endl;
//     cout<<"onecount:"<<onecount;
// }



// int findingminimuminArray(int a[],int n){
//     int minans=INT_MAX;
//     for(int i=0;i<n;i++){
//         if (a[i]<minans){
//             minans=a[i];
//         }

//     }
//     return minans;
// }



// **************************REVERSE****************************************************

// void reverseArray(int a[],int n){
//    int i=0;
//    int j=n-1;
// while(i<=j){
//  swap(a[i],a[j]);
//     i++;
//     j--;  
// }
// }






//  void extreamArray(int a[],int n){
//     int i=0;
//     int j=n-1;
//  while(i<=j){
//   cout<<a[i]<<" ";
//   cout<<a[j]<<" ";
//      i++;
//      j--;  
//  }
//  }

// void printarray(int a[],int n){
//   for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
//   }
// }









// int main(){
// int a[]={23,34,4,5,6,7,8,1};
// int n=8;
// cout<<"reverse array:";
// // reverseArray(a,8);
// extreamArray(a,8);
// printarray(a,8);

// int minimum=findingminimuminArray(a,8);

// cout<<"minimum element is:"<<minimum;















    // int a[]={1,0,0,0,1,0,1,1,1,1};

    // int n=10;
    // countzeroone(a,10); 

// -2 to the power 31
// cout<<INT_MIN<<endl;


// //2 to the power 31-1
// cout<<INT_MAX;





//     int i,n,a[100];
//     int mid,low,high;
//     cout<<"enter no of element in the array:";
//     cin>>n;
//     cout<<"enter array element:";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"array element is:";
// solve(a,n);
// cout<<endl;
//     int item;
//     cout<<"enter searching element:";
//     cin>>item;
// bool ans=linearsearch(a,n,item);
// if(ans==1){
//     cout<<"item is found";
// }
// else{
//     cout<<"item is not found";
// }
//     low=0;
//     high=n-1;
// mid=(low+high)/2;
// bool flag=0;




//**************************************LINEAR SEARCH************************************************


//     for(int i=0;i<n;i++){
//         if(a[i]==target){
//             flag=1;
//               cout<<"searching element in the index:"<<i+1;
//             break;
//         }    
// }
// cout<<endl;
// if(flag==1){
//       cout<<"searching succesfully";
// }
// else{
//     cout<<"element is not present in array";
// }







// ********************BINARY SEARCH******************************************************

// while(low<=high){
//     if(a[mid]<target){
//         low=mid+1;
//     }
//     else if(a[mid]==target){
//         cout<<"target is present in the index:"<<mid+1<<endl;
//         break;

//     }
//     else{
//         high=mid-1;
//     }
    
//     mid=(low+high)/2;
// }
// if(low>high){
//     cout<<"element not present in array";
// }


//   return 0;
// }


