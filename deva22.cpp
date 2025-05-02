#include<iostream>

using namespace std;

string classify(int T){
    if(T <10)
        return "it is very cool";
    
    else if(T >=10 && T<=20)
        return "it is cold";
    
    else
        return "it is warm";
    
}

int main(){

    int T1,T2;
    cout<<"Enter two temperature T1 And T2:";
    cin>>T1>>T2;
    

    cout<<classify(T1)<<","<<classify(T2)<<",";


    float ans=(T1+T2)/2;

    cout<<ans<<",";

    cout<<T2<<","<<T1<<endl;
}