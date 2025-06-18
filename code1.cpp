#include <iostream>
using namespace std;

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

    int index = 0; // Index to store unique elements

    for (int i = 0; i < N; i++) {
        bool isFound = false;

        // Check if arr[i] already exists in arr[0...index-1]
        for (int j = 0; j < index; j++) {
            if (arr[i] == arr[j]) {
                isFound = true;
                break;
            }
        }

        if (!isFound) {
            arr[index] = arr[i];
            index++;
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < index; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Total unique elements: " << index << endl;

    return 0;
}
