#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;

    

    // Method 1

    // for(int i=0;i<n;i++){
    //     int k=0;
    //     for(int j=0;j<((2*n)-1);j++){
    //        if(j<n-i-1){
    //         cout<<" ";
    //        }
    //        else if(k<2*i+1){
    //         cout<<"*";
    //         k++;
    //        }
    //        else{
    //         cout<<" ";
    //        }
    //     }
    //     cout<<endl;
    // }



    // method 2
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";

    //     }
    //     cout<<endl;

    // }


    // // inverted Full pyramind

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    // for(int i=0;i<n;i++){
        
    //     for(int j=0;j<n-i-1;j++){
            
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         if(j==0 || j==i+1-1 ){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

// hollo inverted pyramind

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
        
    //         if(j==0 || j==n-i-1 ){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


// hollow diamond

// for(int i=0;i<n;i++){
        
//         for(int j=0;j<n-i-1;j++){
            
//             cout<<" ";
//         }
        
        
//         for(int j=0;j<i+1;j++){
//             if(j==0 || j==i+1-1 ){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }

//         }
//         cout<<endl;

//     }

// //hollo inverted pyramind

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
        
//             if(j==0 || j==n-i-1 ){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
   

  //  for(int i=0;i<n;i++){
  //   for(int j=0;j<n-i;j++){
  //       cout<<"*";
  //   }

  //   for(int j=0;j<2*i+1;j++){
  //       cout<<" ";
  //   }

  //   for(int j=0;j<n-i;j++){
  //       cout<<"*";
  //   }
    
  //   cout<<endl;
  //  }










   
//    for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }

//     for(int j=0;j<2*n-2*i-1;j++){
//         cout<<" ";
//     }

//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
    
//     cout<<endl;
//    }

// for(int i=0;i<n;i++){
//     for(int j=0;j<2*i+1;j++){
//         if(j%2==1){
//             cout<< "*";
//         }
//         else{
//             cout<<i+1;
//         }

//     }
//     cout<<endl;
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<2*n-2*i-1;j++){
//         if(j%2==1){
//             cout<< "*";
//         }
//         else{
//             cout<<n-i;
//         }

//     }
//     cout<<endl;
// }


// for(int i=0;i<n;i++){
//   for(int j=0;j<n-i;j++){
//     if(j==0 || j==n-i-1 || i==0){
//         cout<<"* ";
//     }
//     else{
//         cout<<"  ";
//     }
//   }
//   cout<<endl;
// }

// for(int i=0;i<n;i++){
//   for(int j=0;j<i+1;j++){
//     char ch= j+1+'A'-1;
//     cout<<ch;
//   }
//   cout<<endl;
//   }
// int i, j, k = 0;
//     // loop to print number from 1 to N
//     for (i = 1; i <= n; i++) {
//         // For loop to display number from i to N
//         for (j = i; j <= n; j++) {
//             if (i == 1 || j == i || j == n)
//                 cout << j << " ";
//             else
//                 cout << "  ";
//         }
//         cout << endl;
//     }
// }



//  for(int i=0;i<n;i++){
//    for(int j=0;j<2*n-i-2;j++){
//      cout<<"* ";
//    }
//    cout<<endl; 


//      for(int j=0;j<2*i+1;j++){
//          cout<<j<<"*";
//      }
//      cout<<endl;
// for(int j=0;j<2*n-i-2;j++){
//      cout<<"* ";
//    }

//  }


//    for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//       cout<<"* ";    
//    }   
// cout<<endl; 
// }

//    for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//       cout<<"* ";    
//    }   
// cout<<endl; 

 

// }




// floyed trainngle


int count = 1; 
 
    
    for (int i = 1; i <= n; i++) 
    {
        
        for (int j = 1; j <= i; j++) 
        {
           
            cout << count << " ";
 
            
            count += 1;
        }
       
        
        cout << "\n";
    }





//Butterfly pattern
//   for(int i=0;i<n;i++){
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








 

    


















