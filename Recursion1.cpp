#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n==0 || n==1){
        return 1;
    }

    // recursive call
    int ans=n*factorial(n-1);
    return ans;

}




void  print(int n){

    // base case
    if(n==1){
        cout<<1<<" ";
        return ;

    }

// recursive call
    print(n-1);
cout<<n<<" ";
}

int power(int n){

    // base case
    if(n==0){
        return 1;
    }


    // recursive call
    int ans=2*power(n-1);

    return ans;
}


int fibonacci(int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

// recursive call
int ans=fibonacci(n-1)+fibonacci(n-2);
return ans;

}




int sum(int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

// recursive call
int ans=n+sum(n-1);
return ans;

}





int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    // cout<<fibonacci(n);
    // print(n);
    // cout<<"factorial:"<<factorial(n);
    // cout<<"power of 2^"<<n<<" ="<<power(n);

     cout<<sum(n);

}