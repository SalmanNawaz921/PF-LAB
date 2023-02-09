#include <iostream>

using namespace std;

int numbers[100];
int arrayLength;

// function to check if the array is a repeating cycle
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
    cout << "Enter the length of the array: ";
    cin >> arrayLength;
    for (int i = 0; i < arrayLength; i++)
    {


    cout << "Enter the elements of the array: ";
        cin >> numbers[i];
    }

    int cycleLength;
    cout << "Enter the length of each cycle: ";
    cin >> cycleLength;

    bool repeat=isRepeatingCycle(cycleLength);

    if (repeat)
    {
        cout << "The array is a repeating cycle" << endl;
    }
    else
    {
        cout << "The array is a non-repeating cycle" << endl;
    }

    return 0;
}
