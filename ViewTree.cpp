#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node*right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* createTree(){
    cout<<"enter the value for node:"<<endl;
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }
//step 1 :create node
    Node* newnode=new Node(data);


    // second step; left sub tree
    cout<<"enter the value for left node:"<<newnode->data<<endl;
    newnode->left=createTree();


    // third step: create right sub tree

    cout<<"enter the value for right node:"<<newnode->data<<endl;
      newnode->right=createTree();

      return newnode;
}

void preoerder(Node * root){
    if(root== NULL){
        return ;
    }

    // N L R
    /// n current node ko process kro
    cout<<root->data<<" ";

    // L ko process kro
    preoerder(root->left);

    // R ko process kro ab
    preoerder(root->right);
}

void inorder(Node *root){
 if(root== NULL){
        return ;
    }
    // L N R
    //L->left part ko process kro
    inorder(root->left);

    // N
    cout<<root->data<<" ";

    //R
 inorder(root->right);

    

}


void Postorder(Node * root){
    if(root== NULL){
        return ;
    }


//L R N

//L
Postorder(root->left);

//R
Postorder(root->right);

//N
  cout<<root->data<<" ";

}

void levelordertraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    // asli travesal start krte hai
    while(q.size()>1){
        Node*front=q.front();
        q.pop();

if(front==NULL){
    cout<<endl;
    q.push(NULL);
}
      else{

       cout<<front->data<<" ";

        if(front->left != NULL){
            q.push(front->left);
        }
        if(front->right != NULL){
            q.push(front->right);
        }

 }
    }

}

void printleftview(Node*root,int level, vector<int>&leftview){
    if(root==NULL){
        return ;
    }
    if(level==leftview.size()){
        leftview.push_back(root->data);
    }
printleftview(root->left,level+1,leftview);
printleftview(root->right,level+1,leftview);

}
void printrightview(Node*root,int level, vector<int>&rightview){
    if(root==NULL){
        return ;
    }
    if(level==rightview.size()){
        rightview.push_back(root->data);
    }
    printrightview(root->right,level+1,rightview);
printrightview(root->left,level+1,rightview);


}

int main(){
Node*root=createTree();

//10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
levelordertraversal(root);


vector<int>leftview;
vector<int>rightview;

printleftview(root,0,leftview);
cout<<"printing leftview of tree"<<endl;
for(int i=0;i<leftview.size();i++){
    cout<<leftview[i]<<" ";
}
printrightview(root,0,rightview);
cout<<"printing rightview of tree"<<endl;
for(int i=0;i<rightview.size();i++){
    cout<<rightview[i]<<" ";
}

}
