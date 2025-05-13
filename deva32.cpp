#include<iostream>

using namespace std;

int main(){

    int V,W;
    cout<<"Number of vehicle:";
    cin>>V;
    cout<<endl;
    cout<<"Number of Wheels:";
    cin>>W;

    int sum=V+W;
    if(W < 2*V || W%2 !=0 || W >4*V){
        cout<<"INVALID Case....";
    }
    else{

        int FW= (W-2*V)/2;
        int TW=V-FW;

        cout<<"TW:"<<TW<<" "<<"FW:"<<FW<<endl;
    }




}