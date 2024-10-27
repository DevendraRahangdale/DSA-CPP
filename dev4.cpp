#include<iostream>
using namespace std;
int main()
{
    int saving;
    cin>>saving;
    if (saving>500)
      {
        if (saving>10000)
        {
            cout<<"roadtrip with abc\n";
        }
        else 
        {
            cout<<"roadtrip with xyz\n";
        }

    
     }
      else if(saving>2000)
      {
        cout<<"roadtrip with pqr";
      }

      else{
        cout<<"roadtrip with friends";
      }
return 0;
    
}