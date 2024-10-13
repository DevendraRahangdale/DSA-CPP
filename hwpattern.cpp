#include<iostream>
using namespace std;

int main(){
    // // solid square pattern
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    // hollo sqaure pattern

    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         if(i==0 ||  i==4){
    //             cout<<"* ";

    //         }
    //         else if(j==0 || j==4){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // inverted Half hollo pyramind
int n;
cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0 || j==0 ||j==n-i-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

for(int i=0;i<n;i++){
    int k=0;
    for(int j=0;j<((2*n)-1);j++){
        if(j<n-i-1){
            cout<<" ";
        }
        else if(k<2*i+1){
            if(k==0 || k==2*i || i==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
            k++;
        }
        else{
            cout<<" ";
        }
        
    }
    cout<<endl;
}

}
