#include <iostream>

using namespace std;

int numbers[1000];
int arrayLength;

bool isRepeatingCycle(int cycleLength)
{
    if (cycleLength > arrayLength)
        return true;
    for (int i = 0; i < arrayLength; i++)
    {

        if (numbers[i % cycleLength] != numbers[i])
            return false;
    }

    return true;
}

int main()
{
    cout << "ENTER SIZE OF ARRAY: ";
    cin >> arrayLength;
    for (int i = 0; i < arrayLength; i++)
    {

        cout << "ENTER ELEMENT AT INDEX: " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int cycleLength;
    cout << "ENTER LENGTH OF EACH CYCLE: ";
    cin >> cycleLength;

    bool repeat = isRepeatingCycle(cycleLength);

    if (repeat)
    {
        cout << "ARRAY IS A REPEATING CYCLE" << endl;
    }
    else
    {
        cout << "ARRAY IS A NON-REPEATING CYCLE" << endl;
    }

    return 0;
}
