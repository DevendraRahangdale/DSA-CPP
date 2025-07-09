#include<iostream>
#include<string>
using namespace std;


void capatialize(string str,int size){
    for(int i=0;i<size;i++){
        if(i==0 || i==(size-1) && (int)str[i] >=97){
            str[i]=(char)((int)str[i]-32);
        }
        else if(str[i]==' ' && (int)str[i+1] >=97){
            str[i+1]=(char)((int)str[i+1]-32);
        }
        else if(str[i]==' ' && (int)str[i+1]<97){
            str[i+1]=(char)((int)str[i+1]+32);

        } 
        else if(str[i]==' ' && (int)str[i-1]>=97){
            str[i-1]=(char)((int)str[i-1]-32);
        }
         else if(str[i]==' ' && (int)str[i-1]<97){
            str[i-1]=(char)((int)str[i-1]-32);
        }
    }
    cout<<"ans of this string:"<<str<<endl;
    
}

int main(){
    string str;
    cout<<"string is:";
    getline(cin,str);
    
    int size=str.length();

    capatialize(str,size);

}