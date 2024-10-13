#include<iostream>
using namespace std;

class Stack {
    int *arr;
    int size;
    int top1;
    int top2;

public:
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data) {
        if (top2 - top1 == 1) {
            cout << "Overflow in Stack 1" << endl;
        }
        else {
            top1++;
            arr[top1] = data;
        }
    }

    void push2(int data) {
        if (top2 - top1 == 1) {
            cout << "Overflow in Stack 2" << endl;
        }
        else {
            top2--;
            arr[top2] = data;
        }
    }

    void pop1() {
        if (top1 == -1) {
            cout << "Underflow in Stack 1" << endl;
        }
        else {
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2() {
        if (top2 == size) {
            cout << "Underflow in Stack 2" << endl;
        }
        else {
            arr[top2] = 0;
            top2++;
        }
    }

    void print() {
        cout << endl;
        cout << "top1=" << top1 << endl;
        cout << "top2=" << top2 << endl;

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack st(6);

    
    // Example usage
    st.push1(1);
    st.print();

    st.push1(2);
    st.print();
    st.push2(3);
    st.print();
    st.push2(4);
    st.print();
    st.push2(4);

    // st.print();

    // st.pop1();
    // st.pop2();

    // st.print();


    return 0;
}
























