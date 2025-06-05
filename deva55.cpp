#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;
 
int main(){

    string word;
    map<string,int>freq;
    vector<string>order;

    cout<<"enter word tha separete the words : for stop press ctrl+z";

    
    while (cin>>word){
transform(word.begin(),word.end(),word.begin(),::tolower);

if(freq[word]==0){
    order.push_back(word);
}
freq[word]++;
    }

    for(string w:order){
        cout<<w<<" "<<freq[w]<<" ";
    }
    
    return 0;
}