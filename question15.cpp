// Fibonacci Sequence using Recursion //

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Fibonacci of " << a << " is: " << fibonacci(a) << endl;
    return 0;
}