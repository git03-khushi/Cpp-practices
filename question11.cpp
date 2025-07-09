//Swap two numbers//
#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    swap(&a, &b);
    cout << "After swap: a = " << a << ", b = " << b;
    return 0;
}
