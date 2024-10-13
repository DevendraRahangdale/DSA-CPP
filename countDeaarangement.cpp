#include<iostream>
#include<vector>
using namespace std;


int solve(int n){
//base case
if(n==1){
    return 0;
}
if(n==2){
    return 1;
}

int ans=(n-1)*(solve(n-1)+solve(n-2));
return ans;
}

int paintsgetways(int n,int k){
    // base case

    if(n==1){
        return k;
    }
    if(n==2){
        return k*(k-1);
    }

    int ans=(k-1)*(paintsgetways(n-1,k)+paintsgetways(n-2,k));

    return ans;
}













int main(){
//     int n=3;
//    cout<< solve(n);
// 
int n=3;
int k=3;
cout<<paintsgetways(n,k);
}