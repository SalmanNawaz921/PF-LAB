#include <iostream>

using namespace std;

// void discount (int price , string brandName);
// void isGreatest(int number1 , int number2 , int number3);
int isGreatest(int number1, int number2, int number3);
main()
{

    // int price;
    // string brandName;

    // cout<<"ENTER THE PRICE OF SUIT: ";
    // cin>>price;

    // cout<<"ENTER THE NAME OF BRAND: ";
    // cin>>brandName;

    //     discount(price,brandName);

    int number1, number2, number3;

    cout << "ENTER THE FIRST NUMBER: ";
    cin >> number1;

    cout << "ENTER THE SECOND NUMBER: ";
    cin >> number2;

    cout << "ENTER THE THIRD NUMBER: ";
    cin >> number3;

    cout << isGreatest(number1, number2, number3);
}

// void discount (int price , string brandName){

//      if(price < 1500){

//         if(brandName=="Outfitters"){

//             cout<<"DO NOT BUY THE SUIT!!! ";

//         }

//      }

// }

// void discount (int price , string brandName){

//      if(price < 1500 && brandName == "Outfitters"){
//            cout<<"DO NOT BUY THE SUIT!!! ";

//      }
//      else{
//           cout<<"BUY THE SUIT!!!";
//           }

// }

// void isGreatest(int number1 , int number2 , int number3){

//        if(number1 > number2 && number1 > number3 ){
//              cout<<number1;
//        }
//        if(number2 > number1 && number2 > number3 ){
//              cout<<number2;
//        }
//        if(number3 > number1 && number3 > number2 ){
//              cout<<number3;
//        }

// }

int isGreatest(int number1, int number2, int number3)
{
    int great;
    if (number1 > number2 && number1 > number3)
    {
        great = number1;
    }
    else if (number2 > number1 && number2 > number3)
    {
        great = number2;
    }
    else if (number3 > number1 && number3 > number2)
    {
        great = number3;
    }
    else
    {
        great=0;
    }
    return great;
}