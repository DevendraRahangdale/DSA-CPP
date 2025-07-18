#include<iostream>
#include<string>

using namespace std;

string findlargest(string str){

 str+=" ";

 int maxlen=0,currlen=0,startindex=0,maxindex=0;

 for(int i=0;i<str.length();i++){
       if(str[i]!=' '){
              if(currlen==0){
                startindex=i;

              }
              currlen++;
       }
       else{
        if(currlen>maxlen){
            maxlen=currlen;
            maxindex=startindex;
        }
        currlen=0;
       }
 }

  return str.substr(maxindex,maxlen);
}

int main(){

    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    string result=findlargest(str);

    cout<<"largest string is:"<<result<<endl;
}