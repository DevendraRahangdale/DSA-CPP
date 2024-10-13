#include<iostream>
#include<queue>
using namespace std;
// the complete binary tree is heap or not
class info{
    public:
    int maxval;
    bool isHeap;
   
    info(int a,bool b){
        this->maxval=a;
        this->isHeap=b;
    }
};

info checkMaxheap(Node *root){
    if(root==NULL){
        info temp;
        temp.maxval=INT_MIN:
        temp.isHeap=true;
        return temp;
    }
    if(root->left==NULL && root->right==NULL){
        info temp;
        temp.maxval=root->data;
        temp.isHeap=true;
        return temp;
    }
    info leftans=checkMaxheap(root->left);
    info rightans=checkMaxheap(root->right);
    // 1 case hame solve krna hai

    if(root->data > leftans.maxval && root->data > rightans.maxval && leftans.isHeap && rightans.isHeap){
info ans;
ans.maxval=root->data;
ans.isHeap=true;
return ans;
    }
    else{
        info ans;
        ans.maxval=max(root->data,max(leftans.maxval ,rightans.maxval));
        ans.isHeap=false;
        return ans;
    }

}

//************************************************************************************************************************ */



// int  kthsmallestelement(int arr[],int n,int k){
//     priority_queue<int>pq;
//     // first k element ko process kr do
//     for(int i=0;i<k;i++){
//         int element=arr[i];
//         pq.push(element);

//     }
//     // remaining element ko tabhi process karenge jab vo root se chote honge
//     for(int i=k;i<n;i++){
//         int element=arr[i];
//         if(element<pq.top()){
//             pq.pop();
//             pq.push(element);

//         }
//     }
//     int ans = pq.top();
//     return ans;
// }
// int  kthlargestelement(int arr[],int n,int k){
//     priority_queue<int,vector<int>,greater<int>>pq;
//     // first k element ko process kr do
//     for(int i=0;i<k;i++){
//         int element=arr[i];
//         pq.push(element);

//     }
//     // remaining element ko tabhi process karenge jab vo root se chote honge
//     for(int i=k;i<n;i++){
//         int element=arr[i];
//         if(element>pq.top()){
//             pq.pop();
//             pq.push(element);

//         }
//     }
//     int ans = pq.top();
//     return ans;
// }
//****************************************************************************************************************** */
int main(){
    // create max heap
    // priority_queue<int>pq;
    // create min heap
//     priority_queue<int,vector<int>,greater<int>>pq;
//     // insertion
//     pq.push(10);
//     pq.push(20);
//     pq.push(30);
//     pq.push(40);
//     pq.push(50);
//     cout<<"top element of heap:"<<pq.top()<<endl;
//     pq. pop();
// cout<<"top element of heap:"<<pq.top()<<endl;
//
//********************************************************************************************************** */

// int arr[]={3,5,4,6,9,8,7};
// int n=7;
// int k=3;

// cout<<"4th smallest element is: "<<kthsmallestelement(arr,n,k);
// cout<<endl;
// cout<<"4th largest element is: "<<kthlargestelement(arr,n,k);
////**************************-------------------------**************------------************-*-*-*-****-*-*-*-*-*-*-*- */
 }