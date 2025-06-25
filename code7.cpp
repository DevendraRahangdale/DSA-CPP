#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cout<<"enter the digit: ";
    cin>>N;
   
    string str=to_string(N);
    int left=0;
    int right=str.length()-1;

    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
    cout<<"number is "<<str<<endl;
}