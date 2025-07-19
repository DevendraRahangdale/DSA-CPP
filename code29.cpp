#include<iostream>
#include<string>

using namespace std;

string solve(string str){

    int n=str.length();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(str[j]> str[j+1]){
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    return str;
}

int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    cout<<"string after sorting:";
    string result=solve(str);
    cout<<result<<endl;
}