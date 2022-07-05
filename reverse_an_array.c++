#include <iostream>
using namespace std;

void rotateArray(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
        
    }
    cout<<endl;
    arr[size] = temp;

    for (temp = size; temp >= 0; temp--)
    {
        cout << " " << arr[temp];
    }
}

// void display(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i];
//     }
// }
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    rotateArray(arr, 6);
    // display(arr, 6);

    return 0;  
}