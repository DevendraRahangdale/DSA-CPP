// #include<iostream>
// using namespace std;

// int main() {
// 	int  width, height;
            
// 	cin >> width >> height;
// 	int area = width * height;
// 	cout <<"area of rectangle:"<< area << endl;
// 	return 0;
// }



// #include<iostream>
// using namespace std;

// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;                                                   
//     while(n!=0){
//         int digit = n%2;

//  factor = 2*factor;
//         sum = sum + digit*factor;
       
//         n = n/2;
        
//     }
//     cout<<"sum is:"<<sum;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n, flag=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         flag = 1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 flag = 0;
//             }
//         }
//         if(flag==1){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
//}






// #include<iostream>
// using namespace std;

// int main() {
// 	int n,a=0;
// 	cin>>n;
//     int z = n,digits=0;
//     while(z!=0){
//         z = z/10;
//         digits++;
//     }
//     while(n!=0){
//         int k = n%10,z=digits-1;
//         while(z--){
//             k = k*10;
//         }
//         a = a + k;
//         digits--;
//         n = n/10;
//     }
//     cout<<a;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// bool checkMember(int n){
//     int f1 = 1, f2 = 1;
//     if(n==0 && n==1){
//         return true;
//     }
//     else{
//         while(1){
//             int temp = f1 + f2;
//             f1 = f2;
//             f2 = temp;
//             if(temp==n){
//                 return true;
//             }
//             else if(temp>n){
//                 return false;
//             }
//         }
//     }

// }

// int main(){

//    if(checkMember(4)) {
//     cout<<"true";
//    }
//    else{
//     cout<<"false";
//    }
//     return 0;
// }





/*
Pattern for N = 4
   1
  212
 32123
4321234
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=0,gaps = n-1;
//     while(i<n){
//         int k=0,gaps=n-1-i;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         int num = i+1;
//         while(num>0){
//             cout<<num;
//             num = num - 1;
//         }
//         k = 2;
//         while(k<=(i+1)){
//             cout<<k;
//             k++;
//         }
//         k =0;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         i++;
//         cout<<"\n";
//     }
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=0,gaps = n-1;
//     while(i<n){
//         int k=0,gaps=n-1-i;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         int num = i+1;
//         while(num>0){
//             cout<<num;
//             num = num - 1;
//         }
//         k = 2;
//         while(k<=(i+1)){
//             cout<<k;
//             k++;
//         }
//         k =0;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         i++;
//         cout<<"\n";
//     }
// }
/*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;

// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<j+1;
//     }

//     for(int j=0;j<2*i;j++){
//         cout<<"*";
//     }
//     for(int j=0;j<n-i;j++){
//         cout<<j+1;
//     }

//     cout<<endl;

// }
// }






// #include<iostream>
// using namespace std;
// #include <climits>


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     if(n==0||n==1){
//         cout<<INT_MIN;
//     }
//     else{
//         int max = INT_MIN;
//         for(int i=0;i<n;i++){
//             if(max<arr[i]){
//                 max=arr[i];
//             }
//         }
//         int second = INT_MIN;
//         for(int i=0;i<n;i++){
//             if(max>arr[i] && arr[i]>second){
//                 second = arr[i];
//             }
//         }
//         cout<<second;
//     }
// }




// #include<iostream>
// using namespace std;

// /*
// Pattern for N = 4
// 4444
// 333
// 22
// 1
// */

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=0;i<n;i++){
//         for(j=i;j<n;j++){
//             cout<<n-i;
//         }
//         cout<<endl;
//     }
// }