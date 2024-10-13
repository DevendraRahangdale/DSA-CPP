
#include <iostream>
using namespace std;

void merge(int a[], int s, int e) {
    int mid = (s + e) / 2;
    int lenleft = mid - s + 1;
    int lenright = e - mid;


   // create left and right array
    int *left = new int[lenleft];
    int *right = new int[lenright];

    // copy value from original to left array
    int k=s;
    // k->starting index of left array value in original array
    for (int i = 0; i < lenleft; i++) {
        left[i] = a[k];
        k++;
    }
// copy value from original to right array
    k = mid + 1;
    for (int i = 0; i < lenright; i++) {
        right[i] = a[k];
        k++;
    }

    // actual merge ka logic ab ayenga

     // left array is already sorted
     // right array is already sorted

    int leftindex = 0;
    int rightindex = 0;

     // yhi  pe galti karonge
    int mainArryIndex = s;

    while (leftindex < lenleft && rightindex < lenright) {
        if (left[leftindex] < right[rightindex]) {
            a[mainArryIndex] = left[leftindex];
            mainArryIndex++;
            leftindex++;
        } else {
            a[mainArryIndex] = right[rightindex];
            mainArryIndex++;
            rightindex++;
        }
    }
// 2 more cases

     //1-> case left array exhaust but right array me elemennt abhi bache hai
    
    while (rightindex < lenright) {
        a[mainArryIndex] = right[rightindex];
        mainArryIndex++;
        rightindex++;
    }

 //2-> case right array exhaust but left array me elemennt abhi bache hai

    while (leftindex < lenleft) {
        a[mainArryIndex] = left[leftindex];
        mainArryIndex++;
        leftindex++;
    }
// 1 more step is pending
    delete[] left;
    delete[] right;
}

void mergesort(int a[], int s, int e) {
    // base case
    if (s >= e) {
        return;
    }

    int mid = (s + e) / 2;
// left part
    mergesort(a, s, mid);
    // right part
    mergesort(a, mid + 1, e);

    merge(a, s, e);
}

int main() {
    int a[] = {2, 1, 6, 3, 90, 45};
    int size = 6;
    int s = 0;
    int e = size - 1;

    cout << "before merge sort:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    mergesort(a, s, e);

    cout << "\nafter merge sort:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}