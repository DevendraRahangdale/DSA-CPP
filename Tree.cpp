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
int main(){

    Node * root=createTree();
    // cout<<root->data<<endl;
    cout<<"printing pre order";
    preoerder(root);
    cout<<endl;

    cout<<"printing inorder";
    inorder(root);

    cout<<endl;
    

    cout<<"printing postorder";
    Postorder(root);

    cout<<endl;

    cout<<"printing level order";
    levelordertraversal(root);


}