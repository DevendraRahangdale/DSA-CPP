#include<iostream>
#include<string>

using namespace std;

string removechar(string A,string B){
    string result="";

    for(int i=0;i<A.length();i++){
        bool found=false;
        for(int j=0;j<B.length();j++){
            if(A[i]==B[j]){
                found=true;
                break;
            }
        }

        if(!found){
            result +=A[i];
        }
    }
return result;
}

int main(){
cout<<"enter the two string:";
    string s1,s2;
    cin>>s1>>s2;

   cout<<"ans string is:";

   cout<<removechar(s1,s2)<<endl;
}