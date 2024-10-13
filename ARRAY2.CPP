#include<iostream>
using namespace std;


// int getunique(int a[],int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=ans^a[i];
//     }
// return ans;

// }






//SORT ZEROS AND ONES

// void sortZeroOne(int a[],int n){
//     int zerocount=0;
//     int onecount=0;
// // STEP NO 1:COUT ZEROS AND ONES
//     for(int i=0;i<n;i++){
//         if(a[i]==0){
//             zerocount++;
//         }
//         if(a[i]==1){
//             onecount++;
//         }

//     }
//     // STEP2;PLACE ZERO AND ONES
// int i;
//     for( i=0;i<zerocount;i++){
//         a[i]=0;
//     }
//     for(int j=i;j<n;j++){
//         a[j]=1;

//     }
// }



// ARRAY SHIFT BY  1

void arrayshiftby1(int a[],int n){
    // step 1
    int temp=a[n-1];

// step 2
//shift-> a[i]=a[i-1];

    for(int i=n-1;i>=1;i--){
        a[i]=a[i-1];
    }

    //step 3:copy index into i zeroth poosition
    a[0]=temp;
}








int main(){

// int a[]={2,3,4,5,6,7,6,5,4,3,2};
// int n=11;

// int finalans=getunique(a,n);

// cout<<"final ans:"<<finalans;





// int a[]={0,1,0,0,0,0,1,1,0};
// int n=9;

// sortZeroOne(a,n);






int a[]={10,20,30,40,50,60};
int n=6;
arrayshiftby1(a,n);
cout<<"output:";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}


// PRINT PAIR OF TWO
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<"("<<a[i]+a[j]<<")"<<" ";
//     }
// }



//pPRINT TRIPLET OF THE ARRAY

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         for(int k=0;k<n;k++){


//              cout<<"("<<a[i]<<a[j]<<a[k]<<")"<<" ";
//         }
       
//     }
// }



}
