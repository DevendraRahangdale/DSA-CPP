#include<iostream>
#include<string.h>
using namespace std;

//************************************************************************************************************
// findm  the length of string
int findinglength(char ch[],int n){
    int length=0;
    for(int i=0;i<n;i++){
        if(ch[i] =='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}


//*****************************************************************************************************************

// void reversestring(char ch[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         swap(ch[s],ch[e]);
//         s++;
//         e--;
//     }
// }


//*********************************************************************************************************************


void convertToUppercase(char ch[],int n){
    int i=0;
    while(ch[i] != '\0'){
int currentCharacter=ch[i];
if(currentCharacter>='a' && currentCharacter<='z'){
    ch[i]=currentCharacter-'a'+'A';
}
i++;


    }
}


//**************************************************************************************************************

void replaceCharacter(char ch[],int n){
    int i=0;
    while(ch[i] != '\0'){
        if(ch[i]=='@'){
            ch[i]=' ';
        }
        i++;
    }
}

//*************************************************************************************************************


bool checkpalindrom(char ch[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
if(ch[i]==ch[j]){
    
    i++;
    j--;
}
else{
    return false;
}
    }
    return true;
}

//*******************************++++++++++++++++++++++++++++++++*********************************************




int main(){

char ch[100];
cout<<"enter string:";
cin.getline(ch,100);

// cout<<"before :"<<ch<<endl;
// convertToUppercase(ch,100);
// cout<<"after:"<<ch;
// cout<<"before :"<<ch<<endl;
// replaceCharacter(ch,100);
// cout<<"after:"<<ch;

int len=findinglength(ch,100);
// cout<<"length of string is :"<<len<<endl;

// cout<<"printing length:"<<strlen(ch)<<endl;

// reversestring(ch,len);
// cout<<"reverse string is:"<<ch;

bool ans=checkpalindrom(ch,len);
if(ans){
    cout<<"string is palindrom";
}
else{
    cout<<"string is not a palindrom";
}







//*********************************************************************************************************

//     char ch[10];

// cout<<"enter the my name:";
// cin.getline(ch,100);

//print using loop
// cout<<"my name is :"<<ch<<endl;
// for(int i=0;i<10;i++){
//     cout<<"index of letter:"<<i<<" "<<ch[i]<<endl;
// }

// char temp=ch[8];

// int value=(int)temp;

// cout<<"value at index 8 is:"<<value;

//****************************************************************************************************************
}