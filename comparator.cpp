#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;



void printarray(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}


bool mycomp(int &a,int &b){
   return a>b; // this is for deacreasinng order
//    return a<b; // this is for increasinng order
}
int main(){
    vector<int>v={34,65,78,99,90};

    sort(v.begin(),v.end(),mycomp);
    printarray(v);
    
}
