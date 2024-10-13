#include<iostream>
#include<vector>
using namespace std;

// function handle all the below condition of possibility

// POSSIbility hai 
// path closed ho
// out of bound
//jha se aye hai vhi firse nhi ja sakte
 bool isSafe(int srcx, int srcy,int newx,int newy,int maze[][4],int row,int col,vector < vector<bool> >&visited){
    if ((newx >= 0 && newx < row) && 
        (newy >= 0 && newy < col) && 
        maze[newx][newy] == 1 && 
        !visited[newx][newy]) {
        return true;
    }
    return false;
}

 




void printALLpath(int maze[][4],int row,int col,int srcx,int srcy, string &output,vector < vector<bool> >&visited){

//base case
// destination coordinates are [row-1,col-1]
if(srcx==row-1 && srcy==col-1){
    // reached destination
    cout<<output<<endl;
    return ;

}
// 1 case solve kro baki recursion sambhal lenga

// UP
int newx=srcx-1;
int newy=srcy;
if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited)){
    //mark visited 
    visited[newx][newy]=true;

    //baki recursion sambhal lenga
    output.push_back('U');
     printALLpath(maze,row,col,newx,newy,output,visited);
    //backtracking 
    output.pop_back();
 visited[newx][newy]=false;
}



//RIGHT
 newx=srcx;
 newy=srcy+1;
if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited)){
    //mark visited 
    visited[newx][newy]=true;

    //baki recursion sambhal lenga
    output.push_back('R');
     printALLpath(maze,row,col,newx,newy,output,visited);
    //backtracking 
    output.pop_back();
 visited[newx][newy]=false;
}
//DOWN
 newx=srcx+1;
 newy=srcy;
if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited)){
    //mark visited 
    visited[newx][newy]=true;

    //baki recursion sambhal lenga
     output.push_back('D');
     printALLpath(maze,row,col,newx,newy,output,visited);
    //backtracking 
    output.pop_back();
 visited[newx][newy]=false;
}

//LEFT
 newx=srcx;
 newy=srcy-1;
if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited)){
    //mark visited 
    visited[newx][newy]=true;

    //baki recursion sambhal lenga
    output.push_back('L');
     printALLpath(maze,row,col,newx,newy,output,visited);
    //backtracking 
    output.pop_back();
 visited[newx][newy]=false;
}





}

int main(){
int maze[4][4]={
{1,0,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,1,1}
    };
int row=4;
int col=4;

int srcx=0;
int srcy=0;

string output="";
// create visited 2D array
vector < vector<bool> >visited(row,vector<bool>(col,false));
if(maze[0][0]==0){
    // sorce ki position hi closed hai,rat cannot moves
    cout<<"no path exist"<<endl;
    
}
else{
    visited[srcx][srcy]=true;
    printALLpath(maze,row,col,srcx,srcy,output,visited);
}

}

