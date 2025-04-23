#include<iostream>
using namespace std;



bool isprime(int num){
    if(num <= 1 ) return false;

    for(int i=2;i*i<=num;i++){
        if(num % i==0) return false;
    }
    return true;
}

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

// check each row for at least on eprime no 

for(int i=0;i<N;i++){
    bool hasprime=false;
    for(int j=0;j<M;j++){
        if(isprime(matrix[i][j])){
            hasprime=true;
            break;
        }

    }
    if(!hasprime){
        cout<<"Not valid";
        return 0;
    }
}
    
cout<<"valid";
return 0;



}