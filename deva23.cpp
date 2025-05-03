#include<iostream>
using namespace std;


int main(){

    int matrix[100][100];
    int N,M;
    cout<<"Enter no of row ans column:";

    cin>>N>>M;



    if(M<=0 && N<=0){
        cout<<"Wrong input"<<endl;
    }

    int totalelement=N*M;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>matrix[i][j];
           
        }
    }

    cout<<endl;

    cout<<"your matrix is:"<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<matrix[i][j]<<" ";
           
        }
        cout<<endl;
    }


    cout<<endl;

    cout<<"zig zag pattern of matrix:"<<endl;

    for(int i=0;i<N;i++){
        if(i % 2==0){
          for(int j=0;j<M;j++){
cout<<matrix[i][j];
          }
        }
        else{
            for(int j=M-1;j>=0;j--){
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }



return 0;

}