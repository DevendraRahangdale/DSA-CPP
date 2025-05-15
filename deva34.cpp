#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string startday;
    int numberofdays;

    cout<<"enter thr start day:";
    cin>>startday;

    cout<<"enter no of days:";
    cin>>numberofdays;

    string  daysofweek[7]={
        "sunday","monday","tuesday","wednesday","thursday","friday","Saturday"
    };

int startindex=0;
    for(int i=0;i<7;i++){

        if(daysofweek[i]==startday){
            startindex=i;
            break;
        }
    }


    int sundaycount=0;

    for(int i=0;i<numberofdays;i++){
        int currentday=(i+startindex)%7;
        if(currentday==0){
            sundaycount++;
        }
    }
    cout<<"sunday:"<<sundaycount<<endl;
}