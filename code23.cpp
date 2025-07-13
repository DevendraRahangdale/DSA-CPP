#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str1,str2;
    cout<<"string 1 is:";
    getline(cin,str1);

    cout<<"string 2 is:";
    getline(cin,str2);

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    if(str1==str2){
        cout<<"Both string are anagrams"<<endl;
    
    }else{
        cout<<"Both string are not anagrams"<<endl;
    }

}