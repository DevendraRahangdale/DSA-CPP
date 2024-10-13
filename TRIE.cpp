#include<iostream>
#include<vector>
using namespace std;


class trieNode{
    public:
    char value;
    trieNode* children[26];
    bool isTerminal;

    trieNode(char val){
        this->value=val;

        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        this->isTerminal=false;
    }


};
// insertion
void insertWord(trieNode*root, string word){
// cout<<"recieved word "<<word<<"  "<<"for inserting"<<endl;  
 if(word.length()==0){
        root->isTerminal=true;
        return ;
    }
char ch=word[0];
int index=ch-'a';

trieNode*child;
if(root->children[index] != NULL){
    // present
    child=root->children[index];
}
else{
    // absent
    child=new trieNode(ch);
    root->children[index]=child;
}

// recursion
insertWord(child,word.substr(1));

}


bool searchWord(trieNode *root,string word){
    // base case
    if(word.length()==0){
return root->isTerminal;
    }
    char ch=word[0];
    int index=ch-'a';
    trieNode*child;
    if(root->children[index] != NULL){
        // child present hai
        child= root->children[index];
    }
    else{
        // not fount
        return false;
    }
    // baki recursion sambhal lenga
    bool recursionkaans= searchWord(child,word.substr(1));
    return recursionkaans;
}


void deleteWord(trieNode*root, string word){
    if(word.length()==0){
        root->isTerminal=false;
        return ;
    }
    // 1 case mera 
    char ch= word[0];
    int index=ch-'a';
    trieNode* child;


    if(root->children[index]!= NULL){
        // present hai
        child=root->children[index];

    }
    else{
        // absent hai
        return;
    }
    deleteWord(child,word.substr(1));

    // baki recursion tera
}

void   StoreString(trieNode*root,vector<string>&ans, string &input,string & prefix){
    // base case
    if(root->isTerminal ==true){
        ans.push_back(prefix+input);


    }

    for(char ch='a';ch<='z';ch++){
        int index=ch-'a';
        trieNode*next=root->children[index];

        if(next != NULL){
            // child exist krta hai
            input.push_back(ch);
            //baki recursion dekh lenga

            StoreString(next,ans,input,prefix);

            input.pop_back();

        }
    }
}


void findprifixString(trieNode *root,string input,vector<string>&ans,string & prefix){
    // base case

    if(input.length() == 0){
        trieNode*lastchar=root;

        StoreString(lastchar,ans,input,prefix);
        return ;
    }
    char ch=input[0];
    int index=ch-'a';
    trieNode*child;
    if(root->children[index] != NULL){
        // child presern
        child=root->children[index];
    }
    else{
        return ;
    }

    // recursive call
     findprifixString(child,input.substr(1),ans,prefix);
}


vector<vector<string>>getSuggestions(trieNode* root, string input) {

  vector<vector<string> > output;
  trieNode* prev = root;
  string inputhelper = "";

  for(int i=0; i<input.length(); i++) {
    char lastchar = input[i];
    int index = lastchar - 'a';
    trieNode* curr = prev->children[index];

    if(curr == NULL) {
      break;
    }
    else {
      vector<string> nicheKaAns;
      inputhelper.push_back(lastchar);
      string dummy = "";
       StoreString(curr, nicheKaAns, inputhelper, dummy);
      output.push_back(nicheKaAns);
      //important
      prev = curr;
    }

  }
  return output;
}








int main(){

trieNode *root=new trieNode('-');

insertWord(root,"cater");
insertWord(root,"care");
insertWord(root,"com");
insertWord(root,"lover");
insertWord(root,"load");
insertWord(root,"bat");
insertWord(root,"car");
insertWord(root,"lov");
insertWord(root,"cat");

vector<vector<string>>ans=getSuggestions(root, "loa");

// printing ans;

for(int i=0;i<ans.size();i++){
    cout<<i<<"->";
    for(auto str:ans[i]){
        cout<<str<<","<<endl;
        
    }
}













// string input="c";
// vector<string>ans;
// string prefix=input;

// findprifixString(root,input,ans,prefix);

// for(auto i:ans){
//     cout<<i<<" ";
// }
// cout<<endl;





// cout<<"insertion done"<<endl;

// if(searchWord(root,"lover")){
//     cout<<"found"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }
    
// deleteWord(root, "lover");

// if(searchWord(root,"lover")){
//     cout<<"found"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }

}















