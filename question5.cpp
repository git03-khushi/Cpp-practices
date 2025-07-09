// Reverse the number//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int reverse = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n /= 10;
    }

    cout << "Reversed Number: " << reverse << endl;

    return 0;
}