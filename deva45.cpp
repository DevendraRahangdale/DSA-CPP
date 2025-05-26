#include<iostream>
#include<string>


using namespace std;
int main(){
    
    string target,reference;
    cout<<"enter target string:";
    cin>>target;

    cout<<"enter reference string:";
    cin>>reference;

    string result="";
    for(int i=0;i<target.length();i++){
        bool found=false;
       for(int j=0;j<reference.length();j++){
        if(target[i]==reference[j]){
            found=true;
            break;
        }
       }
       if(!found){
        result +=target[i];
       }
    }
cout<<"result:"<<result;
}