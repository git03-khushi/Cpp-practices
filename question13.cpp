// Find largest and smallest element //

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 9, 2, 10, 3};
    int max = arr[0], min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Max: " << max << ", Min: " << min;
    return 0;
}
