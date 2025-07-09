// Fibonacci Sequence//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> n;

    int fib1 = 0;
    int fib2 = 1;
    int fibNext;

    cout << "Fibonacci Sequence: ";

    for (int i = 1; i <= n; i++)
    {
        cout << fib1 << " ";
        fibNext = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibNext;
    }
}
