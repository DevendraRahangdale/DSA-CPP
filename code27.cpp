#include<iostream>
#include<string>
using namespace std;


string lexological(string str){
    for(int i=0;i<str.length();i++){
        int ascii=(int)str[i];
        if(ascii==90){
            str[i]=char(65);
        }else if(ascii==122){
            str[i]=char(97);
        }
        else if((ascii>=65 && ascii<=89)||(ascii>=97 && ascii<=121)){
        
            str[i]=char(ascii+1);
        }
        }
        return str;
    }


int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    string result=lexological(str);
    cout<<"ans:"<<result<<endl;
}