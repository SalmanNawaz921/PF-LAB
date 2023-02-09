#include <iostream>

using namespace std;

int boxes[9];

main()
{
    int box;
    cout << "ENTER HOW MANY BOXES'S DIMENSIONS YOU WANT TO ENTER: ";
    cin >> box;

    box = box * 3;

    boxes[box];

    int add = 0;
    int product = 0;

    for (int i = 0; i < box; i++)
    {
        cout << "ENTER DIMENSIONS: ";
        cin >> boxes[i];
    }
    for (int j = 0; j < box; j = j + 3)
    {
        product = boxes[j] * boxes[j + 1] * boxes[j + 2];
        add = add + product;
    }
    cout << add;
}