#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;
    int arr[n] = {20, 15, 26, 2, 98, 6};  // Original array

    map<int, int> mp;  // Stores element -> rank (automatically sorted by element)
    int temp = 1;      // Initial rank
    int brr[n];        // Copy of original array

    // Copy original array into brr
    for (int i = 0; i < n; i++) {
        brr[i] = arr[i];
    }

    // Sort the copied array to assign ranks
    sort(brr, brr + n);

    // Assign rank to each unique element in sorted order
    for (int i = 0; i < n; i++) {
        // If element not already in map (mp[element] == 0)
        if (mp[brr[i]] == 0) {
            mp[brr[i]] = temp;  // Assign current rank
            temp++;             // Increment rank
        }
    }

    // Replace original elements with their ranks using map
    for (int i = 0; i < n; i++) {
        cout << mp[arr[i]] << " ";
    }
}
