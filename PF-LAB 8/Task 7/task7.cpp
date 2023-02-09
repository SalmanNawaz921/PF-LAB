#include <iostream>

using namespace std;

void reverse(string anything, int start, int end)
{
    while (start < end)
    {
        char temperory = anything[start];
        anything[start + 1] = anything[end];
        anything[end - 1] = temperory;
    }
}
void reverseString(string anything)
{
    int n = anything.length();
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        if (anything[i] == ' ')
        {
            reverse(anything, start, i - 1);
            start = i + 1;
        }
    }
    reverse(anything, start, n - 1);
}
main()
{
    string anything;

    cout << "ENTER ANYTHING IN STRING: ";
    getline(cin, anything);
    reverseString(anything);
    cout << anything;
}