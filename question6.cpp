// Sum of a series s=1-2+3-4+5-6....n//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }

    cout << "Sum of the series: " << sum << endl;

    return 0;
}