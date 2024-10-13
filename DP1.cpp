#include<iostream>
#include<vector>
using namespace std;

int solveusingrecurssion(int n ,int k){
    if(n==1){
        return k;
    }

    if(n==2){
        return (k+k*(k-1));
    }
    int ans=(solveusingrecurssion(n-1,k)+solveusingrecurssion(n-2,k))*(k-1);
    return ans;
}




int solveusingmemoisation(int n,int k,vector<int>&dp){
     if(n==1){
        return k;
    }

    if(n==2){
        return (k+k*(k-1));
    }
    // already exist vala case 
    if(dp[n] != -1){
        return dp[n];
    }

    dp[n]=(solveusingmemoisation(n-1,k,dp)+solveusingmemoisation(n-2,k,dp))*(k-1);
    return dp[n];
}


// tabulation method
int solveusingtabulation(int n,int k){
    vector<int>dp(n+1,-1);

    dp[1]=k;
    dp[2]=k+k*(k-1);

    for(int i=3;i<=n;i++){
        dp[i]=(dp[i-1]+dp[i-2])*(k-1);
           }
           return dp[n];
}


int solveusingspaceoptimization(int n,int k){
 int prev2=k;
    int prev1=k+k*(k-1);
    int curr;

     if(n==1){
        return prev2;
    }

    if(n==2){
        return prev1;
    }
    for(int i=3;i<=n;i++){
        curr=(prev1+prev2)*(k-1);

        // shift
        prev2=prev1;
        prev1=curr;
           }
           return curr;
    
}




int main(){
    int n=3;
    int k=3;

// vector<int>dp(n+1,-1);


    int ans=solveusingspaceoptimization(n,k);
    cout<<"Ans:"<<ans<<endl;
}
