#include <iostream>
#include <algorithm>
using namespace std;

void negative_one_side(int arr[], int n)
{
    sort(arr, arr + n);
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[4] = {-1, 4, -2, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
    negative_one_side(arr, size);
    display(arr, size);
    return 0;
}