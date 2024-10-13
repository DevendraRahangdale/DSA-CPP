#include<iostream>
#include<vector>
using namespace std;


// int search(vector<int>& nums, int target) {
// 		int l = 0, r = nums.size() - 1;
// 		while(l <= r){
// 			int mid = l + (r-l)/2;
// 			if(nums[mid] == target) return mid;
// 			else if(nums[l]>=nums[mid]){
// 				if(nums[l]<=target && target<nums[mid]) r = mid-1;
// 				else l = mid+1;
// 			}
// 			else{
// 				if(nums[mid]<target && target<=nums[r]) l = mid+1;
// 				else r = mid-1;
// 			}
// 		}
// 		return -1; // No need to debug this line.
// 	}






// int mySqrt(int x) {
//         if (x == 0)
//             return x;
//         int first = 1, last = x;
//         while (first <= last) {
//             int mid = first + (last - first) / 2;
//             if (mid*mid == x )
//                 return mid;
//             else if (mid*mid> x ) {
//                 last = mid;
//             }
//             else {
//                 first = mid;
//             }
//         }
//         return -1;
//     }





// int findMin(vector<int>& nums) {
//         int start = 0, end = nums.size() - 1, ans = start;
//         while(nums[start] > nums[end]) {
//             int mid = (start + end) >> 1;
//             if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) 
//                 end = mid;
//             else if(nums[mid] >= nums[start] && nums[mid] >= nums[end])
//                 start = mid + 1;          
//             else return nums[mid];
//             ans = start;
//         }
//         return nums[ans];
//     }




// int findPeakElement(vector<int>& nums) {
//         int n = nums.size();
//         int low = 0;
//         int high = n-1;
//         while(low < high){
//             int mid = (low + high) >> 1;
//             if(nums[mid] > nums[mid+1]){
//                 high = mid;
//             }
//             else{
//                 low = mid+1;
//             }
//         }
//         return low;
//     }





// void selectionSort(int arr[], int size) {
//     for (int i = 1; i < size; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }





// int binarySearch(vector<int>& nums, int target) {
//         int left = 0, right = nums.size()-1;
        
//         while (left <= right) {
//             int mid = left + (right - left) / 2;
//             if (nums[mid] < target) {
//                 left = mid+1;
//             } else {
//                 right = mid-1;
//             }
        
        
//         if (nums[mid] == target) {
//             return mid;
//         } 
//     }
//     }

























int main(){



// vector<int>n={87,44,23,90,11};

// int ans=search(v,11);

// int ans=findPeakElement(v);

// cout<<"ans:"<<ans;



// int ans=mySqrt(64);

// cout<<"ans:"<<ans;

// selectionSort(a,5);

// for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
// }

// int ans=binarySearch(n,23);

// cout<<"ans:"<<ans;



}