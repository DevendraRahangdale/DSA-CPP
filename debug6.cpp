#include <iostream>
using namespace std;

int main(){
    int p = 5;
    int const *q = &p;
    p++;
    cout << p << endl;
    return 0;
}