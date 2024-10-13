#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"value of n:";
    cin>>n;


//NUMERIC HALF HOLLOW PYRAMIND********************************************************

//     // for(int i=0;i<=n;i++){
//     //     for(int j=1;j<i+1;j++){
//     //          if(j==1 || j==i || i==n){
//     //           cout<<j;
//     //     } 
//     //     else{
//     //         cout<<" ";
//     //     }
//     //    }  
//     //     cout<<endl;
//     // }

//HOLLOW INVERTED HALF PYRAMIND**********************************************************

// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         if(j==0 || j==n-i-1 || i==0){
//         cout<<i+1;
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }




//
//HOLLOW INVERTED HALF PYRAMIND**********************************************

// int i, j, k = 0;
     
//      for (i = 1; i <= n; i++) {

//          for (j = i; j <= n; j++) {
//              if (i == 1 || j == i || j == n)
//                  cout << j << " ";
//              else
//                  cout << "  ";
//          }
//          cout << endl;
//      }

//


// SOLID HALF DIAMOND ***************************************************

// for(int i=0;i<n;i++){

//     for(int j=0;j<n-i;j++){
//         cout<<" ";
//     }
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i=0;i<n;i++){

//     for(int j=0;j<i+1;j++){
//         cout<<" ";
//     }
//     for(int j=0;j<n-i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }




// FANCY PATTERN 2***********************************************************************************



// int count = 1; 
//     for (int i = 1; i <= n; i++) 
//     {
//         for (int j = 1; j <= i; j++) 
//         {
//             cout << count << "*"; 
//             count += 1;
//         }
//         cout<<endl;

//     }
//     int count1 =1;
//     for (int i = 1; i <= n; i++) 
//     {
//         for (int j = 1; j <= n-i; j++) 
//         {
//             cout << count1 << "*"; 
//             count1 += 1;
//         }
//         cout<<endl;
//     }



// FLOYED TRAINGLE **************************************************************************


// int count = 1; 
//      for (int i = 1; i <= n; i++) 
//      {
//          for (int j = 1; j <= i; j++) 
//          {
//              cout << count << " "; 
//              count += 1;
//          }
//          cout<<endl;

// }



//PASCAL TRAINGLE*************************************************************************

// for(int i=0;i<=n;i++){
//     int c=1;
//     for(int j=1;j<=i;j++){
//         cout<<c<<" ";
//         c=c*(i-j)/j;
//     }
//     cout<<endl;
// }


// BUTTERFLY PATTERN*************************************************************************

//  for(int i=0;i<n;i++){
//      for(int j=0;j<i+1;j++){
//          cout<<"*";
//      }

//      for(int j=0;j<2*n-2*i-1;j++){
//          cout<<" ";
//      }

//      for(int j=0;j<i+1;j++){
//          cout<<"*";
//      }
    
//      cout<<endl;
//     }
//   for(int i=0;i<n;i++){
//      for(int j=0;j<n-i;j++){
//          cout<<"*";
//      }

//      for(int j=0;j<2*i;j++){
//          cout<<" ";
//      }

//      for(int j=0;j<n-i;j++){
//          cout<<"*";
//      }
    
//      cout<<endl;
//     }





 }




// PRINT DIGITS OF THE INTEGER

// #include<iostream>
// using namespace std;
// int printDigit(int n)
// { int ans=0;
//     while(n)
//     {
//       int  ans=n%10;
//     cout<<"digit:"<<ans<<endl;
//         n=n/10; 
//     } 
// }
// int main()
// {
//     int n;
//     cin>>n;
//     printDigit(n);
// return 0;

// }



