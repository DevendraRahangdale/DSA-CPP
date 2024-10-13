#include<iostream>
using namespace std;


void Quicksort(int a[],int start,int end){
    // base case
    if(start >= end){
        return ;
    }
    int pivot=end;
    int i=start-1;
    int j=start;
    while(j<pivot){
if(a[j]<a[pivot]){
    i++;
    swap(a[i],a[j]);
}
j++;

    }
    i++;
    swap(a[i],a[pivot]);
    Quicksort(a,start,i-1);
    Quicksort(a,i+1,end);

}





int main(){
int a[] = {2, 1, 6, 3, 90, 45};
    int size = 6;
    int s = 0;
    int e = size - 1;

    cout << "before Quick sort:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    Quicksort(a, s, e);

    cout << "\nafter Quick sort:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}