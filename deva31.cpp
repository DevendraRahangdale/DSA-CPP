#include<iostream>
#include<string>
using namespace std;

int main(){

    cout<<"enter the string:";

    string s1;
    cin>>s1;

    int starcount=0;
    int hashcount=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='*'){
            starcount++;
        }else{
            hashcount++;
        }
    }
    if(starcount==hashcount){
        cout<<0<<endl;
    }
    else if(starcount>hashcount){
        cout<<"starcount:"<<starcount<<endl;
    }
    else{
        cout<<"hashcount  -"<<hashcount<<endl;
    }
}