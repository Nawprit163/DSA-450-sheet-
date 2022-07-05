#include <iostream>
using namespace std;

int maximum(int arr[], int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        return max;
    }
}
int minimum(int arr[], int n)
{
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        return min;
    }
}
int main()
{
    int arr[5] = {1, 78, 45, 90, 88};
    cout << "The maximum number is " << maximum(arr, 5) << endl;
    cout << "The minimum number is " << minimum(arr, 5) << endl;
    return 0;
}