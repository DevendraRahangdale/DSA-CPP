#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}



int main(){

    int a[]={6,5,9,19,7,8};
    int n=6;

insertionSort(a,n);

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

}

