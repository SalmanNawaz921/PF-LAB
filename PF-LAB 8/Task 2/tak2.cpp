#include <iostream>

using namespace std;

// int countMiles(int no,int number)

main()
{

    int no;
    cout << "HOW MANY WEEKS DATA YOU WANT TO ENTER: ";
    cin >> no;

    int number[no];

    int count = 0;

    for (int i = 0; i < no; i++)
    {
        cout << "ENTER WEEK " << i << " PROGRESS: ";
        cin >> number[i];

        if (number[i] > number[i - 1])
        {
            count++;
        }
    }
    cout << count;
}