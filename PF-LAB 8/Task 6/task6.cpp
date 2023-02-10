
#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "ENTER HOW MANY PACKAGES YOU WANT TO ENTER: ";
    cin >> number;

    int no[number];

    for (int i = 0; i < number; i++)
    {
        cout << "Enter SIZE OF PACKAGE " << i + 1 << ": ";
        cin >> no[i];
    }

    int temp;

    for (int i = 0; i < number - 1; i++)
    {
        for (int j = 0; j < number - i - 1; j++)
        {
            if (no[j] > no[j + 1])
            {
                temp = no[j];
                no[j] = no[j + 1];
                no[j + 1] = temp;
            }
        }
    }

    cout << "ASCENDING ORDER OF PACKAGE SIZES: " << endl
         << "[";
    for (int i = 0; i < number; i++)
    {
        cout << no[i] << " ";
    }
    cout << "]";
    return 0;
}
