#include<iostream>
using namespace std;

bool checkUniqueoccurance(int a[],int n){

    int frequency;
    for( int i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            if (a[j]==i)
            {
                frequency[i-1]++;
            }
        }
    }
    for( int i=0;i<n;i++)
   {
    for(j=0;j<n;j++){
        if(i==j || frequency[i]==0)
        continue;
    if(frequency[i]==frequency[j]){
        return false;
    }
}

    }
    return true;
} 
int main(){
int a[100],n,i;
    cout<<"entre size of array:";
    cin>>n;
    cout<<"entre array element:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
     n= sizeof a/sizeof a[0];
     bool res=checkUniqueoccurance(a , n)
if (res)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;


return 0;


}