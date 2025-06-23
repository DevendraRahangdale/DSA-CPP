#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool palindrome(int n) {
    string str = to_string(n);
    int left = 0;
    int right = str.length() - 1;
    while(left < right) {
        if(str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int n1, n2;
    cout << "Enter n1 and n2: ";
    cin >> n1 >> n2;

    vector<int> ans;

    for(int i = n1; i <= n2; i++) {
        if(palindrome(i)) {
            ans.push_back(i);
        }
    }

    cout << "Palindrome numbers are: ";
    for(auto x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
