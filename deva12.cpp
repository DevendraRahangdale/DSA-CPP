#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int findlengthofsubstring(string s){
    int left=0;
    int maxlength=0;
    unordered_map<char,int>charmap;

    for(int right=0;right<s.length();right++){
        char current=s[right];

        if(charmap.count(current) && charmap[current] >=left){
            left=charmap[current]+1;
        }
        charmap[current]=right;
        maxlength=max(maxlength,right-left+1);


    }
return maxlength;

}





int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;

    int result=findlengthofsubstring(s);

    cout<<"the length of substring witout repeating char:"<<result<<endl;

}