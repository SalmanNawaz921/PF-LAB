#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    int arr2[size];

    int count = 0;

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element at index " << i << ": ";
        cin >> arr[i];
    }

    for (int i = 1; i < size - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            arr2[count] = arr[i];
            count++;
        }
    }

    if (count == 0)
    {
        cout << "No peak found" << endl;
    }
    else
    {
        cout << "The peaks are: ";
        for (int i = 0; i < count; i++)
        {
            cout << arr2[i] << " ";
        }
    }

    return 0;
}
