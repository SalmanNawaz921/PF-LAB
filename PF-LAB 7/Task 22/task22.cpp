#include <iostream>

using namespace std;

main()
{
    float arr[4];
    float dueAmount;

    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            cout << "ENTER QUARTERS IN YOUR POCKET: ";
            cin >> arr[i];
        }
        else if (i == 1)
        {
            cout << "ENTER DIMS IN YOUR POCKET: ";
            cin >> arr[i];
        }
        else if (i == 2)
        {
            cout << "ENTER NICKELS IN YOUR POCKET: ";
            cin >> arr[i];
        }

        else if (i == 3)
        {
            cout << "ENTER PENNY IN YOUR POCKET: ";
            cin >> arr[i];
        }
    }

    cout<<"HOW MUCH AMOUNT YOU WANT TO PAY: ";
    cin>>dueAmount;

    float quarters = arr[0] * 0.25;
    float dime = arr[1] * 0.10;
    float nickels = arr[2] * 0.05;
    float penny = arr[3] * 0.01;
    float add = quarters + dime + penny + nickels;

    if(add>=dueAmount){
          cout<<"AMOUNT IS PAYABLE";
    }
    else{
        cout<<"AMOUNT IS NOT PAYABLE";
    }

}
