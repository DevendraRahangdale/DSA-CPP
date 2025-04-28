#include<iostream>
#include<algorithm>

using namespace std;

int minoperation(int p,int q,int r){
    int total=p+q+r;
    if(total %3 !=0) return -1;

   int target=total/3;

   int ops=(abs(p-target)+abs(q-target)+abs(r-target))/2;
   return ops;
}


int main(){

    int P,Q,R;
    cout<<"enter the value of P,Q,R:";
    cin>>P>>Q>>R;

    int result=minoperation(P,Q,R);
    if(result==-1){
        cout<<"not possible to make all equal";
    }
    else{
         cout<<result<<endl;
    }
    return 0;

}