#include<iostream>
#include<limits.h>
#include<math.h>
#include<vector>
using namespace std;

void printarray(int arr[],int size,int i){
    // base case
if(i>=size){
    return ;
}
// processing 
cout<<arr[i]<<" ";

// recursive call
printarray(arr,size,i+1);
}




//*********************************************************************************************************************
bool searchinArray(int arr[],int size,int i,int target){
  // base case
if(i>=size){
    return false;
}
if(arr[i]==target){
    return true;
}

// recursive call
bool agekaans=searchinArray(arr,size,i+1,target);
return agekaans;
}



//**********************************************************************************************************************
void findmin(int arr[],int size,int &mini,int index){

    // base case
    if(index>=size){
        return ;
    }
// processing
    mini=min(mini,arr[index]);

    // recursive call
findmin( arr,size, mini,index+1);
}

//**********************************************************************************************************************



void findmax(int arr[],int size,int &maxi,int index){

    // base case
    if(index>=size){
        return ;
    }
// processing
    maxi=max(maxi,arr[index]);

    // recursive call
findmax( arr,size, maxi,index+1);
}

//*******************************************************************************************

void solve(int a[], int size, int i,vector<int>&ans){

if(i>=size){
    return ;
}
if(a[i]%2==0){
    ans.push_back(a[i]);
}
// recursive relation

solve(a,size,i+1,ans);

}

//**************************************************************************************************

void doublearray(int a[], int size, int i,vector<int>&ans){

if(i>=size){
    return ;
}

    ans.push_back(a[i]*2);

// recursive relation

doublearray(a,size,i+1,ans);

}

//*****************************************************************************************************************

void searchindex(int arr[],int size,int i,int target){
  // base case
if(i>=size){
    return ;
}
if(arr[i]==target){
    cout<<i<<" ";
}

// recursive call
searchindex(arr,size,i+1,target);

}

//************************************************************************************************************
void printDigit(int num){
    if(num==0){
        return ;
    }
int digit=num%10;

// number ko update kr do
num=num/10;

// recursive call kr do

printDigit(num);

cout<<digit<<" ";

}
//*********************************************************************************************************************
void printnumber(int a[],int size,int i){
    if(i>=size){
        return ;
    }
    int ans=0;
    ans=10*a[i]+ans;

    cout<<ans;
    printnumber(a,size,i+1);
}
//***************************************************************************************************************

void findindex(char str[],char  target,int i,int size){



if(i>=size){
    return ;
}

if(str[i]==target){
    cout<<i<<" ";
}
 findindex(str, target, i+1,size);
}





int main(){

  char ch[10];
  

 cout<<"enter the my name:";
 cin.getline(ch,10);
int i=0;
char target;
 cin>>target;
 findindex(ch, target,i,10);


















// int num=4237;

// printDigit(num);


// int arr[]={10,90,10,40,10};
// int size=5;
// int index=0;
// cout<<printnumber(arr,size,index);
// int target=10;

// // // printarray(arr,size,i);

// searchindex(arr,size,index,target);

// int max=INT_MIN;

// findmax( arr, size, max, index);
// cout<<"maximum element in array  is:"<<max<<endl;


// vector<int>ans;
// doublearray( arr,  size,  index,ans);

// for(int num:ans){
//     cout<<num<<" ";
// }


}