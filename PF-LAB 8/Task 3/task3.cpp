#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "ENTER THE SIZE OF ARRAY: ";
    cin >> size;

    int arr[size];
    int arr2[size];

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "ENTER ELEMENTS AT INDEX " << i + 1 << ": ";
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
        cout << "NO PEAK BOUND " << endl;
    }
    else
    {
        cout << "PEAKS ARE: ";
        for (int i = 0; i < count; i++)
        {
            cout << arr2[i] << " ";
        }
    }

    return 0;
}
