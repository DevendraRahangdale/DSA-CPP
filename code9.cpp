#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cout<<"enter the digit: ";
    cin>>N;
   
    int sum=0;
    string str=to_string(N);
    for(int i=0;i<str.size();i++){
        int x=str[i]-'0';
        sum +=x;

    }

    if(N %sum==0){
        cout<<"Yes it is a Harshad number";
    }else{
        cout<<"no it is not harshed number";
    }
    
}