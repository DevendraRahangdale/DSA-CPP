#include<iostream>
using namespace std;



// key pair

// void printkey(int a[],int n){
//     int key=9;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){ 
//     if(a[i]+a[j]==key){
//     cout<<"("<<a[i]<<a[j]<<")"<<" ";
//     }
// }
// }
// }





//FINDING PIVOT ELEMENT 

// void pivotIndex(int a[],int n) {
        
//         for(int i=0;i<n;i++){

//         int rightsum=0;
//         int leftsum=0;
    
//         for(int j=0;j<i;j++){
//             leftsum=leftsum+a[j];
//         }
//           for(int j=i+1;j<n;j++){
//             rightsum=rightsum+a[j];
//         }

//         if(leftsum==rightsum){
//         cout<<i;
//         }
// }
//     }





// sort colour

// void sortcolour(int a[],int n){
//     int left=0;
//     int right=n-1;
//     int index=0;

//     while(index<=right){
// for( index=0;index<=n;index++){
//     if(a[index]==0){
//         swap(a[index],a[left]);
//         left++;
//         index++;
//     }
//     else if(a[index]==2){
//         swap(a[index],a[right]);
//         right--;
//     }
//     else{
//         index++;
//     }
// }
//     }
// }




//MISSING NUMBER

// void missingno(int a[],int n){
// // int ans=0;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+a[i];
//     }
//     int totalsum=((n)*(n+1))/2;

//      int ans=totalsum-sum;

//     cout<<"missing number is:"<<ans;

// }





// Move all the negative no. in left side of an array

// void shiftnegative(int a[],int n){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(a[i]<0){
//             swap(a[i],a[j]);
//             j++;
//         }
//     }
// }




// void findduplicate(int a[],int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         int j=i+1;
//         if(a[i]==a[j]){
//             cout<<a[i];
//             j++;
//         }      
// }  
// }



// FIRST REPEATING ELEMENT

// int findrepeat(int a[],int n){
//     for(int i=0;i<n;i++){

//         if(a[i]==a[i+1]){
//             cout<<i<<endl;
//         }
//     }
// }

//FIND COMMON ELEMENT IN THREE SORTED ARRAY

// void findcommon(int a[],int b[],int c[],int n1,int n2,int n3){

//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             for(int k=0;k<n3;k++){
//                 if(a[i]==b[j] && a[i]==c[k]){
//                     cout<<a[i]<<" ";
//                 }
//             }
//         }
//     }
// }










void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}




int main(){
    int a[]={10,20,30,50};
    int n1=4;
    int b[]={3,20,40,50,70,};
    int n2=5;
    int c[]={10,20,70,78,50};
    int n3=5;
    // pivotIndex(a,n);
    // printkey(a,n);
// sortcolour(a,n);

// missingno(a,n);

// shiftnegative( a, n);

// findduplicate(a,n);
//  printarray(a,n);

// findrepeat(a,n);

// findcommon( a, b, c, n1, n2, n3);
    
}