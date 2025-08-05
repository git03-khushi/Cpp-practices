#include <iostream>
using namespace std;

const int SIZE = 50;

void printArray(int A[], int length) {
    for (int i = 0; i < length; ++i)
        cout << A[i] << " ";
    cout << endl;
}

int main() {
    int A[SIZE];
    int length = 0;

    cout << "STEP 1: Insert 10 integers at the tail\n";
    cout << "Before: ";
    printArray(A, length);

    for (int i = 0; i < 10; ++i)
        A[length++] = (i + 1) * 10;

    cout << "After: ";
    printArray(A, length);
    cout << "--------------------------\n";


    cout << "STEP 2: Insert 5, 6, 7 at the head\n";
    cout << "Before: ";
    printArray(A, length);

    int headInsert[] = {5, 6, 7};
    for (int i = 0; i < 3; ++i) {
        for (int j = length; j > 0; --j)
            A[j] = A[j - 1];
        A[0] = headInsert[i];
        length++;
    }

    cout << "After: ";
    printArray(A, length);
    cout << "--------------------------\n";


    cout << "STEP 3: Insert 0 before first occurrence of 40, 60, and 90\n";
    cout << "Before: ";
    printArray(A, length);

    int targets[] = {40, 60, 90};
    for (int k = 0; k < 3; ++k) {
        for (int i = 0; i < length; ++i) {
            if (A[i] == targets[k]) {
                for (int j = length; j > i; --j)
                    A[j] = A[j - 1];
                A[i] = 0;
                length++;
                break; // insert before first occurrence only
            }
        }
    }

    cout << "After: ";
    printArray(A, length);
    cout << "--------------------------\n";


    cout << "STEP 4: Delete one element from start and one from end\n";
    cout << "Before: ";
    printArray(A, length);

    // Delete from start
    for (int i = 0; i < length - 1; ++i)
        A[i] = A[i + 1];
    length--;

    // Delete from end
    length--;

    cout << "After: ";
    printArray(A, length);
    cout << "--------------------------\n";


    cout << "STEP 5: Delete element before and after first occurrence of 100\n";
    cout << "Before: ";
    printArray(A, length);

    int idx = -1;
    for (int i = 0; i < length; ++i) {
        if (A[i] == 100) {
            idx = i;
            break;
        }
    }

    if (idx != -1) {
        // Delete after 100
        if (idx < length - 1) {
            for (int i = idx + 1; i < length - 1; ++i)
                A[i] = A[i + 1];
            length--;
        }

        // Delete before 100
        if (idx > 0) {
            for (int i = idx - 1; i < length - 1; ++i)
                A[i] = A[i + 1];
            length--;
        }
    }

    cout << "After: ";
    printArray(A, length);
    cout << "--------------------------\n";

    return 0;
}