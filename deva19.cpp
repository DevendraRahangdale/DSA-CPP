#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    string s;
    cout<<"enter the string:";
    cin>>s;

    unordered_map<char,int>freq;

    // count the frequency of eacg character

    for(auto c:s)
        freq[c]++;

        // find first non-repeting character
        bool found=false;

        for(char c:s){
            if(freq[c]==1){
                cout<<"first non repeating char:"<<c<<" ";
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"None"<<endl;
        }
cout<<endl;
        // find most frequent character
char maxchar=s[0];
        for(auto c:s){
            if(freq[c]>freq[maxchar]){
                maxchar=c;
            }

        }
        cout<<"most frequent char is:"<<maxchar<<endl;

    

}
