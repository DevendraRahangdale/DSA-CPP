#include<iostream>

using namespace std;

int digitsum(int n){
    int sum=0;
    while(n>0){
        sum += n%10;
        n /=10;

    }
    return sum;
}

int reducedigit(int n){
    while(n>=10){
        n=digitsum(n);
    }
    return n;
}

int main(){

    int N,R;

    cout<<"enter the value of N and R:";
    cin>>N>>R;

    if(R==0){
        cout<<0<<endl;
    }
    else{
        int sumofdigit=digitsum(N);

        int total =sumofdigit*R;

        int result=reducedigit(total);

        cout<<"ans:"<<result<<endl;
    }

}