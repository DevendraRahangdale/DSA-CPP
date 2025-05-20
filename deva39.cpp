#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int smallmissingevent(vector<int>&arr){
    vector<int>evens;

    for(auto num:arr){
        if(num %2==0){
            evens.push_back(num);
        }
    }


sort(evens.begin(),evens.end());

int expected=evens[0];

    for(int num:evens){
        if(num==expected){
            expected +=2;

        }
        else if(num> expected){
            break;
        }
    }
    return expected;
}

int main(){

    vector<int>arr={2,4,6,8,12};
    cout<<smallmissingevent(arr)<<endl;
    return 0;

}