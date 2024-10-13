#include<iostream>
#include<unordered_map>
using namespace std;

void countcharacter(unordered_map<char,int> &mapping,string str){
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        mapping[ch]++;
    }
}



int main(){
    // creation 
    // unordered_map<string ,int>mapping;
    
    // // insertion
    // pair<string,int>p=make_pair("devendra",20);

    // pair<string, int>q("kunal",23);
    // mapping["piyush"]=49;

    // pair<string,int>r;
    // r.first="rohit";
    // r.second=34;


    // mapping.insert(p);
    // mapping.insert(q);
    // mapping.insert(r);

    // cout<<"size of map:"<<mapping.size()<<endl;

    // cout<<mapping.at("devendra")<<endl;

    // cout<<mapping["kunal"];
    // cout<<endl;

    // cout<<mapping.count("devendraa")<<endl;

    // if(mapping.find("devendraaa") != mapping.end()){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"not found"<<endl;
    // }

    //   cout<<"size of map:"<<mapping.size()<<endl;


string str="lovebabbar";

unordered_map<char,int>mapping;

countcharacter(mapping,str);
for(auto i:mapping){
    cout<<i.first <<"->"<<i.second<<endl;
}


}