#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;




// void printmatrix(int a[][3],int n,int m){
//   for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }






// void transpose(int a[][3],int n,int m){
//   for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//         swap(a[i][j],a[j][i]);
//        cout<<a[i][j];  }
//         cout<<endl;
       
//     }
    
// }






// bool findtarget(int a[][3],int n,int  m,int target){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i][j]==target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }







// int findmax(int a[][3],int n,int  m){
//     int maxans=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i][j]>maxans){
//             maxans=a[i][j];
//             }
//         }
//     }
//     return maxans;
// }



// int findmin(int a[][3],int n,int  m){
//     int minans=INT_MAX;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i][j]<minans){
//             minans=a[i][j];
//             }
//         }
//     }
//     return minans;
// }



// void sumofrows(int a[][3],int n,int m){
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=0;j<m;j++){
//             sum=sum+a[i][j];

//         }
//         cout<<sum<<endl;;
//     }
// }


// void sumofcolums(int a[][3],int n,int m){
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=0;j<m;j++){
//             sum=sum+a[j][i];

//         }
//         cout<<sum<<endl;;
//     }
// }


// void sumofdiagonal(int a[][3],int n,int m){
//     int sum=0;

//     for(int i=0;i<n;i++){
        
//         sum=sum+a[i][i];
        
//     }
//     cout<<sum<<endl;
// }







int main(){

//     int arr[3][3];
//     int n,m;
//     cout<<"enter the row and column of matrix:";
//     cin>>n>>m;

//     cout<<"enter matrix element:";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//         cout<<endl;
//     }


//     cout<<"the matrix is:"<<endl;
//     printmatrix(arr,n,m);
//     cout<<endl;
//     cout<<"the transpose of matrix is:"<<endl;
//     transpose(arr,n,m);
    

//     //  for(int i=0;i<n;i++){
//     //     for(int j=0;j<m;j++){
//     //         cout<<a[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }



//     // int target;
//     // cout<<"enter the value of target:";
//     // cin>>target;

//     // cout<<"found or not:"<<findtarget(arr,n,m,target);


//     // cout<<"the max element in array:"<<findmax(arr,n,m)<<endl;

//     // cout<<"the min element in array:"<<findmin(arr,n,m)<<endl;

//     cout<<"sum of rows:"<<endl;
//     sumofrows( arr, n, m);


// cout<<"sum of columns:";
// sumofcolums(arr,n,m);



// cout<<"sum of diagonal:";
// sumofdiagonal(arr,n,m);





// vector<int>arr;
// vector<int>arr(5);
// vector<int>v(5,101);


// cout<<"size of vecrtor:"<<v.size();


// cout<<endl;
// cout<<"printing vector:";
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;




// 2D ARRAY
// vector<vector<int> >arr(5,vector<int>(10,0));
// for(int i=0;i<arr.size();i++){
//     for(int j=0;j<arr[i].size();j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }




vector<vector<int> >brr;

vector <int> vec1(10,0);
vector<int> vec2(8,1);
vector<int>vec3(3,0);
vector<int>vec4(7,1);
vector<int>vec5(5,0);


brr.push_back(vec1);
brr.push_back(vec2);
brr.push_back(vec3);
brr.push_back(vec4);
brr.push_back(vec5);


for(int i=0;i<brr.size();i++){
    for(int j=0;j<brr[i].size();j++){
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
}
}
