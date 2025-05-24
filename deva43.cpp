#include<iostream>
using namespace std;

int main(){
    // u u are given a three integer your task is to calculate total time in second

    int hour,min,sec;
    cout<<"enter the hour ,min, sec:";
    cin>>hour>>min>>sec;

    int ans=(hour*60*60)+(min*60)+sec;

    cout<<"total time:"<<ans<<endl;
}