#include<iostream>
#include<limits.h>
using namespace std;


// COUNT THE ZEROS ANS ONES
// void zerosandonescount(int a[],int n){
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
//    cout<<"zerocount:"<<zerocount<<endl;;
//     cout<<"onecount:"<<onecount<<endl;;
// }



// minimum element in an array

// int minimumelement(int a[],int n){
//     int minans=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(a[i]<minans){
//            minans=a[i]; 

//         }
//     }
//     return minans;
// }



// SHIFTING OF ALL NEGATIVE ANS POSITIVE ELEMENT 

// void shiftnegative(int a[],int n){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(a[i]<0){
//             swap(a[i],a[j]);
//             j++;
//         }
//     }
// }



















void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}






int main(){


int a[]={87,-56 ,34,6,-7 ,-23,45,-1};
int n=8;

// zerosandonescount(a,n);

// int ans=minimumelement(a,n);
// cout<<"minimum element in array is:"<<ans;

// shiftnegative(a,n);
printarray(a,n);





























// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 

// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }



// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }





//   *******
//    ******
//     *****
//      ****
//       ***
//        **
//         *


// for(int i=0;i<n;i++){
//      for(int j=0;j<i+1;j++){
//          cout<<" ";
//      }
//      for(int j=0;j<n-i;j++){
//          cout<<"*";
//      }
//      cout<<endl;
//  }






// 8
// * * * * * * * *  
// * * * * * * *   
// * * * * * *    
// * * * * *     
// * * * *      
// * * *       
// * *        
// *

// for(int i=0;i<n;i++){
//      for(int j=0;j<n-i;j++){
//          cout<<"* ";
//      }
//      for(int j=0;j<i+1;j++){
//          cout<<" ";
//      }
//      cout<<endl;
//  }




// 7
//               *
//             * * *
//           * * * * *
//         * * * * * * *
//       * * * * * * * * *       
//     * * * * * * * * * * *     
//   * * * * * * * * * * * * *   

// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<"  ";
//     }
//     for(int j=0;j<2*i+1;j++){
//         cout<<"* ";;
//     }
//     for(int j=0;j<n-i;j++){
//         cout<<"  ";
//     }
//     cout<<endl;
// }







// 8
//   * * * * * * * * * * * * * * *   
//     * * * * * * * * * * * * *     
//       * * * * * * * * * * *       
//         * * * * * * * * *
//           * * * * * * *
//             * * * * *
//               * * *
//                 *


// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"  ";
//     }
//     for(int j=0;j<2*n-2*i-1;j++){
//         cout<<"* ";;
//     }
//     for(int j=0;j<i+1;j++){
//         cout<<"  ";
//     }
//     cout<<endl;
// }





// 9
// *                 *
// **               **
// ***             ***
// ****           ****
// *****         *****
// ******       ******
// *******     *******
// ********   ********
// ********* *********



// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     for(int j=0;j<2*n-2*i-1;j++){
//         cout<<" ";;
//     }
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }






// ******** ********
// *******   *******
// ******     ******
// *****       *****
// ****         ****
// ***           ***
// **             **
// *               *

// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<"*";
//     }
//     for(int j=0;j<2*i+1;j++){
//         cout<<" ";;
//     }
//     for(int j=0;j<n-i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }









// *             *
// **           **
// ***         ***
// ****       ****
// *****     *****
// ******   ******
// ******* *******
// ******* *******
// ******   ******
// *****     *****
// ****       ****
// ***         ***
// **           **
// *             *


// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     for(int j=0;j<2*n-2*i-1;j++){
//         cout<<" ";;
//     }
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
//  for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<"*";
//     }
//     for(int j=0;j<2*i+1;j++){
//         cout<<" ";;
//     }
//     for(int j=0;j<n-i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }











}