#include <iostream>

using namespace std;

int countWord(int number, string word[0]);

main()
{
    int number;

    cout << "ENTER  HOW MANY WORD YOU WANT TO ENTER: ";
    cin >> number;

    string word[number];
    // char letter;

    // int i = 0;
    // int count = 0;

    // while (i < number)
    // {
    //     cout << "ENTER WORD AT " << i;
    //     cin >> word[i];
    //     i++;
    // }

    // cout << "ENTER LETTER WHICH YOU WANT TO FIND: ";
    // cin >> letter;

    // string temp;
    // for (int j = 0; j < number; j++)
    // {
    //     temp = word[j];
    //     int x = 0;
    //     while (temp[x] != '\0')
    //     {=
    //         if (temp[x] == letter)
    //         {
    //             count++;
    //             // x++;
    //         }
    //         x++;
    //     }
    // }
    // cout << count;

    int count = countWord(number, word);
    cout << count;
}

int countWord(int number, string word[0])
{
    char letter;

    int i = 0;
    int count = 0;

    while (i < number)
    {
        cout << "ENTER WORD AT " << i;
        cin >> word[i];
        i++;
    }

    cout << "ENTER LETTER WHICH YOU WANT TO FIND: ";
    cin >> letter;

    string temp;
    for (int j = 0; j < number; j++)
    {
        temp = word[j];
        int x = 0;
        while (temp[x] != '\0')
        {
            if (temp[x] == letter)
            {
                count++;
                // x++;
            }
            x++;
        }
    }
    return count;
}