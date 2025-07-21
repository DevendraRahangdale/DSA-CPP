#include<iostream>
#include<string>

using namespace std;


string solve(string str){
    int n=str.length();
    for(int i=0;i<n;i++){

        int ascii=(int)str[i];
        if(ascii>=65 && ascii<=90){
            str[i]=char(ascii+32);
        }
        else{
            str[i]=char(ascii-32);
        }
    }
    return str;
}

int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    string result=solve(str);
    cout<<"after change case:"<<result<<endl;
}