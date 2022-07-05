#include <iostream>
#include <algorithm>
using namespace std;

void kthminimum(int arr[], int size, int k)
{
    sort(arr, arr + size);

    cout << "The kth element is " << arr[k - 1];
}

void maximum(int arr[], int size, int k)
{
    sort(arr, arr + size, greater<int>());

    cout << "The maximum kth element is " << arr[k - 1];
}
int main()
{
    int arr[6] = {1, 5, 89, 67, 43, 7};
    int kth = 2;
    maximum(arr, 6, 2);
    cout<<endl;
    kthminimum(arr, 6, 2);
    return 0;
}