#include<iostream>
using namespace std;

int x=4;// Global variable
int main(){
    int x=5;// Local variable
cout<<x<<endl;

cout<<::x<<endl; // accesing of global variable
}


