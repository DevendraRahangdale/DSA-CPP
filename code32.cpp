#include<iostream>
#include<string>

using namespace std;



int solve(string str1,string str2){
    int n=str1.length();
    int m=str2.length();

    if(m>n) return -1;

    for(int i=0;i<=n-m;i++){
        int j=0;
        while(j<m && str1[i+j]==str2[j]){
            j++;
        }
        if(j==m){
            return i;
        }

    }

}

int main(){

    string str1,str2;
    cout<<"first string:";
    getline(cin,str1);

     cout<<"second string:";
     getline(cin,str2);

     int result=solve(str1,str2);
     cout<<"ans:"<<result<<endl;

}