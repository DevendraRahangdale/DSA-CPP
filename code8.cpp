#include<iostream>
#include<string>

using namespace std;

bool automorphic(int N){
int sq=N*N;

string strnum=to_string(N);
string strsq=to_string(sq);

int i=strnum.length()-1;
int j=strsq.length()-1;

while(i>=0){
    if(strnum[i] != strsq[j]){
        return false;
        
    }
    i--;
    j--;
}
return true;

}


int main(){

    int N;
    cout<<"enter number:";
    cin>>N;

    if(automorphic(N)){
        cout<<"it is automorphic";
    }
    else{
        cout<<"not automorphic";
    }

}