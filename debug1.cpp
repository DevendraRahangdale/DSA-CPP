// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c && c<= 'z'){
//         cout<<"0";
//     }
// 	else if('A'<=c && c<= 'Z'){
//         cout<<"1";
//     }
//     else{
//         cout<<"-1";
//     }
// }


/*
Pattern
1
23
345
4567
*/
// #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j = i,count = 1;
//         while(count<=i){
//             cout<<j+1<<" ";
//             j++;
//             count++;
           
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }



/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j = i,count = 2*n-1,gaps=(n-i),k=1;
//         while(k<=gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = count - 2*gaps;
//         while(m<=ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         k = 1;
//         while(k<=gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }





/*
Pattern
N = 4
1
22
333
4444
*/
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<i+1;j++){
// 	        cout<<i;
//         }
//     cout<<endl;
//     }
// }


/*
Pattern
N = 4
1
21
321
4321
*/
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<n;i++){
//        int p=i;
//         for(j=1;j<i+1;j++){
//           cout<<p;
//         p--;
          
//         }
//         cout<<endl;
        
//     }
// }


/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
// #include<iostream>
// using namespace std;

// int main() {
//     int i,j,n;;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         char p='A'+n-i;
//         for(j=1;j<=i;j++){
//             cout<<p;
//             p++;  
//         }
//         cout<<endl;
//     }
// }



/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int no;
//     cin>>no;
//     int i=1;
//     int n = 2*no-1;
//     while(i<=(no)){
//         int gaps = n-2*i+1,k=1;
//         int j = i;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n - gaps, z = (ch+1)/2;
//         while(z>=1){
//             cout<<j;
//             j = j + 1;
//             z = z - 1;
//         }
//         j = j - 1;
//         z = (ch-1)/2;
//         while(z>=1){
//             j = j - 1;
//             cout<<j;
//             z = z - 1;
//         }
//         k = 1;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }


/*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/
// #include<iostream>
// using namespace std;
// void printPatt(int n){
//     int i=1;
//     while(i<=(n)){
//         int gaps = n-2*i+1,k=1;
//         if(i>(n+1)/2){
//             int no = (n+1)/2;
//             gaps = 2*(i%no);
//         }
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n - gaps;
//         while(ch>=1){
//             cout<<"*";
//             ch = ch - 1;
//         }
//         k = 1;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }











#include <iostream>
using namespace std;

int maximum_triangle_height(int red, int blue) {
    int height = 0;
    int total = red + blue;
    
    // Binary search to find the maximum height
    int left = 0, right = total;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int red_needed = mid * (mid + 1) / 2;
        int blue_needed = mid * (mid - 1) / 2;
        
        if (red_needed <= red && blue_needed <= blue) {
            height = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return height;
}

int main() {
    // Examples provided
    cout << maximum_triangle_height(2, 4) << endl;  // Output: 3
    cout << maximum_triangle_height(2, 1) << endl;  // Output: 2
    cout << maximum_triangle_height(1, 1) << endl;  // Output: 1
    cout << maximum_triangle_height(10, 1) << endl; // Output: 4
    cout << maximum_triangle_height(4, 9) << endl;  // Output: 4

    return 0;
}