#include <iostream>
#include<algorithm>
#include <vector>
#include <unordered_map>
#include <utility> // Needed for pair
using namespace std;

void SortElementsByFreq(int arr[], int n) {
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    vector<pair<int, int>> vec;
    for (auto it : mp) {
        vec.push_back({it.first, it.second});
    }

    // Sort by frequency descending
    sort(vec.begin(), vec.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return a.second > b.second;
    });

    for (auto it : vec) {
        for (int i = 0; i < it.second; i++) {
            cout << it.first << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {3, 3, 5, 2, 1, 1, 2,2};
    int n = 8;
    SortElementsByFreq(arr, n);
    return 0;
}
