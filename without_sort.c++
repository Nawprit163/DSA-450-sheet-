#include <iostream>
using namespace std;

class sorting
{
public:
    int swap(int arr[], int st, int en)
    {
        int temp = arr[st];
        arr[st] = arr[en];
        arr[en] = temp;
    }

    int sort(int arr[], int n)
    {
        int low = 0, mid = 0, high = n - 1;

        while (mid <= high)
        {

            if (arr[mid] == 0)
            {
                swap(arr, mid, low);
                low++;
                mid++;
            }

            if (arr[mid] == 2)
            {
                swap(arr, mid, high);
                high--;
            }

            else
            {
                mid++;
            }
        }
        // for (int i = low; i < high; i++)
        // {
        //     cout << arr[i] << " ";
        // }
    }
};
int main()
{
    int arr[5] = {1, 0, 2, 1, 0};
    int n = 5;
    int i, j;
    i = arr[0];
    j = arr[n - 1];
    sorting s1;
    s1.swap(arr, i, j);
    cout << s1.sort(arr, 5) << endl;
    return 0;
}