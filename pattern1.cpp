#include<iostream>
using namespace std;

int main(){

// Square printing

// for(int i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//     }
    
// Rectangle  Pattern 


// outer loop for rows
// for(int i=0;i<3;i++){

//     // innner loop for column
//     for(int j=0;j<5;j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//     }

// hollow Rectangle

// for(int i=0;i<10;i++){
//     for(int j=0;j<7;j++){
//         if(i==0 || i==9){
//             cout<<"* ";
//         }
//         else
//             if(j==0 || j==6){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
// cout<<endl;

//         }

// Half Pyramind
int n;
cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// cout<<endl;
// //Inverted half pyramind
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }


// numeric half pyramind
// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<j+1<<" ";
//     }
//     cout<<endl;
// }

// inverted half pyramind
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<j+1;
//     }
//     cout<<endl; }


// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
//     }

//     for(int j=0;j<i+1;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    for(int j=0;j<2*n-2*i-1;j++){
        cout<<" ";
    }

     for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    for(int j=0;j<2*i+1;j++){
        cout<<" ";
    }

     for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    cout<<endl;
}

   
//    return 0;   
}


   
