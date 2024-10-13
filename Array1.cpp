// #include<iostream>
// using namespace std;

// // int main(){
//     // int arr[10000];
//     // char ch[300];
//     // bool flag[377];

//     // cout<<"array created succesfully";

//     // int a=5;

//     // cout<<"address of a:"<<&a<<endl;
//     // cout<<"size of a:"<<sizeof(a)<<endl;

//     // int arr[100];
//     //  cout<<"address of arr:"<<&arr<<endl;
//     //  cout<<"address of arr:"<<arr<<endl;
//     //  cout<<"size of arr:"<<sizeof(arr)<<endl;

//     // int arr[]={1,2,3,4,5};
//     // cout<<"no issue";

// //     int n,arr[100];
// //     cout<<"enter the no of  element in array:";
// //     cin>>n;

// //     for(int i=0;i<n;i++){
// //    cout<<"enter the array element "<<i<<":";

// //         cin>>arr[i];

// //     }

// //     cout<<"array elements are:";
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;

// //     cout<<arr[4];

// // array create

// // int arr[10];
// // int n=10;
// // // taking input
// // for(int i=0;i<n;i++){
// //     cout<<"enter index with element "<<i<<":";
// //     cin>>arr[i];
// // }
// // // double of an array

// // for(int i=0;i<n;i++){
// //     arr[i]=2*arr[i];
// // }

// // cout<<"output of the program:";

// // for(int i=0;i<n;i++){
// //     cout<<arr[i]<<endl;
// // }
// // int arr[5];
// // int n=5;
// // int sum=0;
// // // taking input
// // for(int i=0;i<n;i++){
// //     cout<<"enter index with element "<<i<<":";
// //     cin>>arr[i];
// // }
// // // double of an array




// // for(int i=0;i<n;i++){
// //     sum=sum+arr[i];
    
// // }
// // cout<<"output of the program:";
// // cout<<sum<<endl;
// // void reverse(int a[],int n){
// //     int first=0;
// //     int last=n-1;

// //     while(first<=last){

// //         swap(a[first],a[last]);
// //         first++;
// //         last--;
// //     }


// // }

// // void getunique(int a[],int n){

// //     int ans=0;
// //     for(int i=0;i<n;i++){
// //         ans=ans^a[i];
        
// //     }
// //     cout<<ans;
// // }



// int main(){


// // int a[]={2,3,4,5,6,9,6,5,4,3,2};
// // int n=11;

// // getunique(a,11);

// // cout<<"enter the size of n:";
// // cin>>n;

// // cout<<"array element:";

// // for(int i=0;i<n;i++){
// //     cin>>a[i];
// // }

// // cout<<"array before reverse:";

// // for(int i=0;i<n;i++){
// //     cout<<a[i]<<" ";
// // }

// // cout<<endl;
// // reverse(a,n);

// // cout<<"array after reverse:";

// // for(int i=0;i<n;i++){
// //     cout<<a[i]<<" ";
// // }

    

// }




#include <vector>
#include <iostream>

using namespace std;

int minOperations(vector<int>& nums) {
    int operations = 0;
    
    // Iterate through each element of nums using a simple for loop
    for (int i = 0; i < nums.size(); ++i) {
        int remainder = nums[i] % 3;
        
        if (remainder == 1) {
            operations += 2; // Add 2 to make it divisible by 3
        } else if (remainder == 2) {
            operations += 1; // Add 1 to make it divisible by 3
        }
    }
    
    return operations;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {3, 6, 9};
    
    cout << minOperations(nums1) << endl; // Output: 3
    cout << minOperations(nums2) << endl; // Output: 0
    
    return 0;
}