// Reversing array using pointers //

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *start = arr;
    int *end = arr + 4;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}