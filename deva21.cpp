#include<iostream>
#include<math.h>
#include <climits>
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
            if(!(cin>>matrix[i][j])){
                cout<<"Wrong input";
                return 0;

            }
            if(matrix[i][j] <0){
                cout<<"Wrong input";
                return 0;
            }
        }
    }

    // find minimun element in matrix

    int mini=INT_MAX;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(matrix[i][j] <mini){
                mini=matrix[i][j];

            }
        }
    }

cout<<mini<<endl;


}