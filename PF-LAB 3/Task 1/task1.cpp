#include <iostream>

using namespace std;

//Function Prototype
void add(int number1 , int number2);
void multiply(int number1, int number2);
void subtraction(int number1, int number2);


main()
{
    int number1 , number2;
    char operation;

    cout<<"Enter The First Number"<<endl;
 
    cin>>number1;


    cout<<"Enter The Second Number"<<endl;

    cin>>number2; 

    cout<<"Enter The Operator: "<<endl;
    
    cin>>operation;
if(operation=='+'){
    add(number1,number2);
}

if(operation=='*'){
    multiply(number1,number2);
}

if(operation=='-'){
    subtraction(number1,number2);
 
}

}

//Function Definations
void add(int number1 , int number2){

     int sum = number1 + number2;
     cout<<"SUM: "<<sum<<endl;

}

void multiply(int number1 , int number2){

     int product = number1 * number2;
     cout<<"Product: "<<product<<endl;

}
void subtraction(int number1, int number2){

 int subtract = number1 - number2;
     cout<<"Difference: "<<subtract<<endl;
}
