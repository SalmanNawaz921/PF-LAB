#include <iostream>

using namespace std;

main()
{
    int number;

    cout << "ENTER NUMBER HOW MANY PACKAGES YOU WANT TO ENTER: ";
    cin >> number;

    int no[number];
    int temp = 0;

    for (int i = 0; i < number; i++)
    {
        cout << "ENTER PACKAGE SIZE: ";
        cin >> no[i];
    }
    for (int i = 0; i < number - 1; i++)
    {
        for (int j = 0; j < number - i - 1; j++)
        {
            if (no[i] > no[j + 1])
            {
                temp = no[j];
                no[j] = no[j + 1];
                no[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < number; i++)
    {
        cout << no[i] << " ";
    }
}