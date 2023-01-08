#include <iostream>

using namespace std;

string numberName(int num, int digit , int number);
string digitName(int digit, int number);
main()
{

    int number;

    cout << "ENTER NUMBER: ";
    cin >> number;

    int digit = number % 10;
    int num = number - digit;

    string numName = numberName(num,digit,number);
    string digName = digitName(digit,number);

    cout << numName << " " << digName;
}

string numberName(int num , int digit , int number )
{
    string nameNumber;

        // Extra Task For Displaying Name From (11-19)

   if(number >=11 && number<=19){

    if (digit == 1 && num == 10)
    {
        nameNumber = "Eleven";
    }

    if (digit == 2 && num == 10)
    {
        nameNumber = "Twelve";
    }

    if (digit == 3 && num == 10)
    {
        nameNumber = "Thirteen";
    }

    if (digit == 4 && num == 10)
    {
        nameNumber = "Fourteen";
    }

    if (digit == 5 && num == 10)
    {
        nameNumber = "Fifteen";
    }

    if (digit == 6 && num == 10)
    {
        nameNumber = "Sixteen";
    }

    if (digit == 7 && num == 10)
    {
        nameNumber = "Seventeen";
    }

    if (digit == 8 && num == 10)
    {
        nameNumber = "Eighteen";
    }

    if (digit == 9 && num == 10)
    {
        nameNumber = "Nineteen";
    }
    return nameNumber;
   }  
    
    if (num == 10)
    {

        nameNumber = "Ten";
    }

    if (num == 20)
    {

        nameNumber = "Twenty";
    }

    if (num == 30)
    {

        nameNumber = "Thirty";
    }

    if (num == 40)
    {

        nameNumber = "Fourty";
    }

    if (num == 50)
    {

        nameNumber = "Fifty";
    }

    if (num == 60)
    {

        nameNumber = "Sixty";
    }

    if (num == 70)
    {

        nameNumber = "Seventy";
    }

    if (num == 80)
    {

        nameNumber = "Eighty";
    }

    if (num == 90)
    {

        nameNumber = "Ninty";
    }

    return nameNumber;
}

string digitName(int digit , int number)
{

    string nameDigit;

    if(number < 11 || number > 19){
    if (digit == 1)
    {

        nameDigit = "One";
    }

    if (digit == 2)
    {

        nameDigit = "Two";
    }

    if (digit == 3)
    {

        nameDigit = "Three";
    }

    if (digit == 4)
    {

        nameDigit = "Four";
    }

    if (digit == 5)
    {

        nameDigit = "Five";
    }

    if (digit == 6)
    {

        nameDigit = "Six";
    }

    if (digit == 7)
    {

        nameDigit = "Seven";
    }

    if (digit == 8)
    {

        nameDigit = "Eight";
    }

    if (digit == 9)
    {

        nameDigit = "Nine";
    }

    return nameDigit;
    }
}
