#include<iostream>
#include<math.h>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cout<<"enter the digit: ";
    cin>>N;
   
    string str=to_string(N);

    for(int i=0;i<str.size();i++){
       if(str[i]=='0'){
        str[i]='1';
        
       }
    }
int result=stoi(str);
cout<<result;
   

    }

    
    
