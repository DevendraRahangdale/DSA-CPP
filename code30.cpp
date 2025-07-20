#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    int noofspace=0;
    for(int i=0;i<str.length();i++){
if(str[i]==' '){
    noofspace++;
}
    }
    cout<<"Number of words in sentence:"<<(noofspace+1)<<endl;
}