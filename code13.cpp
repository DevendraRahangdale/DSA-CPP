#include<iostream>
#include<string>

using namespace std;

int main(){

    string str;

cout<<"string is:";
getline(cin,str);

int vcount=0;
int scount=0;
int ccount=0;


for(int i=0;i<str.length();i++){
    if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i'|| str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U'){
        vcount++;
    }
    else if(str[i]==' '){
        scount++;
    }
    else{
        ccount++;
    }
}

cout<<"vowels count:"<<vcount<<endl;
cout<<"space count:"<<scount<<endl;
cout<<"consonent cout:"<<ccount;


}