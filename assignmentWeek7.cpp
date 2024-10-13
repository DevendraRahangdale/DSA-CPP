#include<iostream>
#include<vector>
using namespace std;

void lastoocLTR(string &s, char x,int i, int &ans){
// base case
if(i>=s.size()){
    return ;
}
// ek case solve krte 
if(s[i]==x){
    ans=i;
}
lastoocLTR(s,x, i+1,ans);
}

//**********************************************************************************************************

void reversestring (string &s,int i,int j){
    // base case 
    
    if(i>=j){
        return ;
    }

swap(s[i],s[j]);

reversestring(s,i+1,j-1);
}

//***********************************************************************************************************

bool checkpalindrome(string &s,int i,int j){
      
    if(i>=j){
        return false;
    }

    if(s[i]==s[j]){
        return true;
    }
checkpalindrome(s,i+1,j-1);

}
//************************************************************************************************************


void printsubarray(vector<int>&nums,int start,int end){
// base case
if(end>=nums.size()){
return;
}

// 1 case solve krdo  baki recursion sambhal lenga
for(int  start=0;start<=end;start++){
    cout<<nums[start]<<" ";
}
cout<<endl;

// recursive call
printsubarray(nums,start,end+1);
}


int main(){

//     string s;
//     cin>>s;
//     int i=0;
//     int j=s.size()-1;
// bool ans=checkpalindrome(s,i,j);
// if(ans){
//     cout<<"string is palindrome"<<endl;
// }
// else{
//     cout<<"string is not palindrome";
// }
// reversestring(s,i,j);
// cout<<s<<endl;



    // char x;
    // cin>>x;
    // int ans=-1;
    // lastoocLTR(s,x,0,ans);
    // cout<<ans;




    vector<int>nums{1,2,3,4,5};

printsubarray(nums,0,0);

}