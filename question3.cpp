//Counting the number of digits//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int digit = 0;

    while (n > 0)
    {
        digit++;
        n /= 10;
    }

    cout << "Number of digits: " << digit << endl;
    return 0;
}