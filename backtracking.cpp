#include<iostream>
using namespace std;

bool isSafe( int** a,int x,int y,int n){
    
    if(x<n&&y<n && a[x][y]==1){
        return true;
    }
    return false;
}
bool ratinMaze(int **a,int x,int y,int n,int **solArray){

if(x==n-1 && y==n-1){
        solArray[x][y]=1;
        return true;
    }


    if(isSafe(a,x,y,n)){
        solArray[x][y]=1;
        if(ratinMaze (a,x+1,y,n,solArray)){
            return true;
        }
        if(ratinMaze(a,x,y+1,n,solArray)){
            return true;
        }
        solArray[x][y]=0;
        return false;
    }
    return false;
    
}
int main(){
    int n;
    cin>>n;
    int **a=new int*[n];
    for(int i=0;i<n;i++){
        a[i]=new int [n];

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int **solArray=new int*[n];
    for(int i=0;i<n;i++){
        solArray[i]=new int [n];
        for(int j=0;j<n;j++){
            solArray[i][j]=0;
        }
    }
    if(ratinMaze(a,0,0,n,solArray)){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solArray[i][j]<<" ";
        }
        cout<<endl;

    }

}
return 0;
}