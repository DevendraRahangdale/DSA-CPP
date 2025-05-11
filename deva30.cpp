
#include<iostream>
using namespace std;


int main(){

    int matrix[100][100];
    int N,M;
    cout<<"Enter no of row ans column:";

    cin>>N>>M;



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



    int maxFilled=-1;
    int rowindex=-1;

    for(int i=0;i<N;i++){
        int count=0;
        for(int j=0;j<M;j++){
            if(matrix[i][j]==1){
                count++;

            }
        }

        if(count > maxFilled){
            maxFilled=count;
            rowindex=i;
        }
    }

    cout<<"ans:"<<(rowindex+1)<<endl;
    return 0;
}