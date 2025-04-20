#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    string input;
    getline(cin, input);  // Read the whole input line

    stringstream ss(input);
    int n;
    ss >> n;  // Read number of shoes

    map<int, int> leftShoes, rightShoes;

    string shoe;
    while (ss >> shoe) {
        int size = stoi(shoe.substr(0, shoe.length() - 1)); // Get the size
        char foot = shoe.back(); // Get 'L' or 'R'

        if (foot == 'L') leftShoes[size]++;
        else if (foot == 'R') rightShoes[size]++;
    }

    int totalPairs = 0;
    for (auto& it : leftShoes) {
        int size = it.first;
        int leftCount = it.second;
        int rightCount = rightShoes[size];  // Get matching right shoe count
        totalPairs += min(leftCount, rightCount);  // Add minimum of both
    }

    cout << totalPairs << endl;
    return 0;
}