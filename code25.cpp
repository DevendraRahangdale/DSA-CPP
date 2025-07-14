#include<iostream>
#include<algorithm>
#include<string>


using namespace std;

int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    sort(str.begin(),str.end());
 string result=" ";
    cout<<"without duplicate string is:";

    for(int i=0;i<str.length();i++){
        if(str[i]!=str[i+1]){
            result+=str[i];
        }
    }
cout<<result<<endl;
    

}