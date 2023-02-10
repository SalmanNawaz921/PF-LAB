#include <iostream>

using namespace std;

main()
{

    int no;
    cout << "HOW MANY WEEKS DATA YOU WANT TO ENTER: ";
    cin >> no;

    int number[no];

    int count = 0;

    for (int i = 0; i < no; i++)
    {
        cout << "ENTER WEEK " << i + 1 << " PROGRESS: ";
        cin >> number[i];

        if (number[i] > number[i - 1])
        {
            count++;
        }
    }
    cout << "THERE ARE " << count << " PROGRESS DAYS";
}