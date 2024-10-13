#include<iostream>
#include<stack>
using namespace std;



int main(){
// stack creation
stack<int>st;


// stack insertion
st.push(10);
st.push(20);
st.push(30);


// find size of stack
cout<<"size of stack :"<<st.size()<<endl;


// stack deletion
st.pop();


// check empty
if(st.empty()){
    cout<<"stack is empty"<<endl;
}
else{
    cout<<"stackis not empty"<<endl;
}

// top element

cout<<st.top()<<endl;
}