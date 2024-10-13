// call by value



// #include<iostream>
// using namespace std;

// int increamentby1(int n){

// n=n+1;
// return n;
// }

// int main(){

//     // int n=5;// n is main variable
//     // int &k=n;// k is a reference variable
//     // int &c=n;

//     // cout<<"n:"<<n<<endl;
//     // cout<<"k:"<<k<<endl;
//     // cout<<"c:"<<c<<endl;


//     // k++;
//     // cout<<"n:"<<n<<endl;
//     // cout<<"k:"<<k<<endl;
//     // cout<<"c:"<<c<<endl;

//     int n;
//     cin>>n;
// cout<<endl;
//     increamentby1(n);

//     cout<<n;


// }




// caLL BY REFERENCE

#include<iostream>
using namespace std;

void increamentby1(int &K){

K=K*10;

}
int main(){
    int n;
    cin>>n;
cout<<endl;
    increamentby1(n);
    cout<<n;


}

