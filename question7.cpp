// Factorial//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int factorial = 1;
    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
        cout << "Factorials are: " << factorial << endl;
    }

    cout << "Factorial of " << n << " = " << factorial << endl;

    return 0;
}