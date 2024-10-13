#include<iostream>
using namespace std;
int main(){

    // int day;
    // cout<<"entre number of day:";
    // cin>>day;
    // switch (day)
    // {
    // case 1:
    // cout<<"monday";
    //     break;
    // case 2:
    // cout<<"tuesday";
    //     break;
    // case 3:
    // cout<<"wednesday";
    //     break;
    // case 4:
    // cout<<"thusday";
    //     break;
    // case 5:
    // cout<<"friday";
    //     break;
    // case 6:
    // cout<<"saturday";
    //     break;
    // case 7:
    // cout<<"sunnday";
    //     break;
    
    // default:
    // cout<<"enter valid no.";
    //     break;
    // }

    int a,b,op;
    cout<<"enter value of a and b:";
    cin>>a>>b;
  cout<<" 1.for addition"<<endl;
  cout<<" 2.for substraction"<<endl;
  cout<<" 3.for multiplication"<<endl;
  cout<<" 4.for division"<<endl;
  cout<<" 5.for remainder"<<endl;
cout<<"enter no for performing operation :";

  cin>>op;

    switch (op)
    {
    case 1:
    cout<<a+b<<endl;
        break;
    case 2:
    cout<<a-b<<endl;
        break;
    case 3:
    cout<<a*b<<endl;
        break;
    case 4:
    cout<<a/b<<endl;
        break;
    case 5:
    cout<<a%b<<endl;
        break;
    
    default:
    cout<<"enter valid no ."<<endl;
        break;
    }


}