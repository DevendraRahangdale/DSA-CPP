#include<iostream>
#include<vector>
using namespace std;

int main(){

int N;
cout<<"Enter the no of branch:";
cin>>N;

if(N<=0) {
    cout<<"the no of braches should be positive";
    return 0;
}

vector<int>branches(N);

branches[0]=1;

if(N >= 2 ) branches[1]=2;

for(int i=2;i<N;i++){
    branches[i]=branches[i-1]*branches[i-2]*2;
}

int total=0;

for(int i=0;i<N;i++){
    total +=branches[i];
}

cout<<total<<endl;


}
