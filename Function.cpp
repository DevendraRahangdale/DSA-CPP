#include<iostream>
using namespace std;

//   FUNCTION DECLARATION
// void printname(){
//     for(int i=0;i<7;i++){
//         cout<<"devendra ko ISHA pasand hai"<<endl;
//     }
// }
// void printname(string name){
//     for(int i=0;i<7;i++){
//         cout<<name<<endl;
//     }
// }

// int sum(int a,int b ,int c){
//     int sum;
//     sum=a+b+c;

//     return sum;
    
// }

// void  printline(){
//     cout<<"my name is devendra rahangdale";
// }


//max of three no
// int maxofthree(int a,int b,int c){
//     if(a>b && a>c){
        
//             cout<<"  gretest is:"<<a<<endl;

//         }
//         else if(b>a && b>c){
//             cout<<" greatest is:"<<b<<endl;
//         }
    
//     else{
//         cout<<" greatest is:"<<c<<endl;
//     }
// }


// PRINT 1 TO N

// void printoneton(int n){
//     for(int i=0;i<n;i++){
//         cout<<i+1<<endl;
//     }
// }

// void evenorodd(int n){
//     if(n%2==0){
//         cout<<"n is  even";
//     }
//     else{
//         cout<<"n is  odd";
//     }
// }
void primeornot(int n){
    for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"n is  not prime no";
    }
    else{
        cout<<"n is  prime ";
    }
    }
}

// SUM OF 1 TO N

// void sumoneton(int n){
//     int sum=0;
//     int i=2;
//     for( i=2;i<=n;i=i+2){
// sum=sum+i;


//     }
//     cout<<"sum is:"<<sum<<endl;;
// }

int main(){

    // int a,b,c;
    // cout<<"enter value of a and b c:";
    // cin>>a>>b>>c;
    // // FUNCTION CALL

    // cout<<"sum is:"<<sum(a,b,c);

    // cout<<"hiiiiiiiiiiiiiiiiii";
    // cout<<endl;
    // printline();

    // maxofthree(5,12,9);

    // printoneton(100);

    // evenorodd(11);

    // sumoneton(10);

    primeornot(10);

}