#include <iostream>
using namespace std;

void insertbeginning(int arr[],int val,int n){
    
    for(int i=n;i>=0;i--){
        arr[i+1]=arr[i];

    }
    arr[0]=val;
}

int main() {
    int N;
    cout << "Size of array: ";
    cin >> N;

    int arr[100000];

    cout << "Enter the array elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Your original array is: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout<<"after inserting first position:"<<endl;


    insertbeginning(arr,7,N);
     for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

}