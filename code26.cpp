#include<iostream>
#include<string>

using namespace std;

int main(){

    string str1,str2;
    cout<<"Enter first string;";
    getline(cin,str1);
    cout<<"Enter scond string:";
    getline(cin,str2);

    string result;
    for(int i=0;i<str1.length();i++){
        int flag=0;
        for(int j=0;j<str2.length();j++){
            if(str1[i]==str2[j]){
                flag=1;
            }
        }
        if(flag !=1){
            result.push_back(str1[i]);
        }
    }
    cout<<"ans:"<<result<<endl;
}