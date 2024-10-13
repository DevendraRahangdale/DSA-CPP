#include<iostream>
using namespace std;

bool checkarray(int a[],int size,int index){
    

    if(index>=size){
        return true;
    }
    if(a[index]>a[index-1]){
        checkarray(a,size,index+1);
    }
    else{
        return false;
    }   
}
//**********************************************************************************************************
int binarysearch(int a[],int s,int e,int target){
   
   

    if(s>e){
        return -1;
    }
 int mid=s+(e-s)/2;

    
        if(a[mid]==target)
            return mid;
            
        
        else if(a[mid]<target)
          return binarysearch( a, mid+1, e, target);

        
        else
           return binarysearch( a, s, mid-1, target);
        
   

    }
//************************************************************************************************


void findsubsequence(string str,string output,int index){
    // base case 

    if(index>=str.length()){

        cout<<"->"<<output<<endl;
        return ;
    }

    char ch=str[index];
 // exclude
     findsubsequence(str, output,index+1);


    // include
    // output sting me ch character ko include ker do
    output.push_back(ch);

findsubsequence(str, output,index+1);
   

}


int main(){

string str="abc";
string output="";
int index=0;

findsubsequence(str, output,index);












    // int arr[]={10,20,30,60,90,100,120};
    // int size=7;
    // int s=0;
    // int e=size-1;
    // int target=100;
    
    //    bool issorted= checkarray(arr,size,index);

//    if(issorted){
//     cout<<"array is sorted";
//    }
//    else{
//     cout<<"array is not sorted";
//    }


// int found=binarysearch(arr,s,e,target);

// if(found !=-1){
//     cout<<"target is present in array:"<<found<<endl;
// }
// else{
//    cout<<"target is not present in array"<<endl; 
// }

}