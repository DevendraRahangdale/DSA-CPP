#include<iostream>
#include<vector>
using namespace std;


// void print(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }



// void print(vector<int>v){
//     int size=v.size();
//     cout<<"printing vector:";
// for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
// }






int main(){


// in vector dont tell the size of array
// vector<int>v;


vector<char>v;

 v.push_back('a');
 v.push_back('b');
 v.push_back('c');
 

 cout<<"front element:"<<v[0]<<endl;

 cout<<"last element:"<<v[v.size()-1]<<endl;















// while(1){
// int d;
// cin>>d;
// v.push_back(d);
// cout<<"capacity:"<<v.capacity()<<endl<<"size:"<<v.size();
// }


//insert
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// print(v);
// cout<<endl;
// cout<<"after delete:";
// // pop-<delete->end;
// v.pop_back();
// print(v);





// ***********************************************
// // // STATIC ARRAY                             *
// // // int a[11]={2,3,4,5,6,7,6,5,4,3,2};*
// // // print(a,11);
// // // DYNAMIC ARRAY
// // int a[1000];
// // int n;
// // cin>>n;
// // for(int i=0;i<n;i++){
// //     cin>>a[i];
// // }
// // for(int i=0;i<n;i++){
// //     a[n+1]=80;
// // }
// // print(a,n);
// **************************************************




// int n;
// cin>>n;

// for(int i=0;i<n;i++){
//     int d;
//     cin>>d;
//     v.push_back(d);
// }

// for(int i=0;i<n;i++){
//     v.push_back(8);
// }

// print(v);

// cout<<endl;
// // i want to clear the vector

// v.clear();
// v.push_back(30);
// print(v);




}
