#include<iostream>

using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i] != '\0';i++){
        count++;

    }
    return count;
}

int main(){

    char name[40];

    cout<<"enter your name:"<<endl;

    cin>>name;
    

    cout<<"your name is:"<<name;
    cout<<endl;

    cout<<"length="<<getlength( name)<<endl;

   int  k=getlength(name);

    reverse( name, k);


     cout<<"your name is:"<<name;
}
