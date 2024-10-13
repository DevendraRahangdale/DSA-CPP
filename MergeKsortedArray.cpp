#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class info{
    public:
    int data;
    int rowindex;
    int colindex;

    info(int a,int b,int c){
        this->data=a;
        this->rowindex=b;
        this->colindex=c;
    }
};

class compare{
    public:
 bool operator()(info*a,info*b){
    return a->data > b->data;
}
};
void MergeKsortedArray(int arr[][4] ,int n, int k, vector<int> &ans){
priority_queue<info*,vector<info*>,compare>pq;

// step 1: process first k element 

for(int row=0;row<k;row++){
    int element=arr[row][0];
    info* temp= new info(element,row,0);
    pq.push(temp);
}

// next step
while(!pq.empty()){

    info* temp= pq.top();
    pq.pop();
    int topdata=temp->data;
    int toprow=temp->rowindex;
    int topcol=temp->colindex;

// store in ans vector

    ans.push_back(topdata);

    // ab next element for the same row, means jis element ko pop kiya hai uske bad vala elemnt 
    // use insert bhi to krna hai

    if(topcol+1 < n){
        // iska matlab row me abhi element presernt hai
        info *newInfo=new info(arr[toprow][topcol+1],toprow,topcol+1);
pq.push(newInfo);
    }

}

}

int main(){
    int arr[3][4]={
        {1,4,8,10},
        { 2,3,6,9},
        {5,7,11,12}
    };
    int n=4;
    int k=3;
    vector<int>ans;

    MergeKsortedArray(arr,n,k,ans);

    cout<<"printing the sorted array:";

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



}