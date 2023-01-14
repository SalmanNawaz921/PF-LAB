#include<iostream>
#include<cmath>

using namespace std;

//void add(int number1 , int number2);
int add(int number1 , int number2);
float divide(float number1 , float number2);
int maximum(int number1, int number2);
int power(int number1, int number2);


main(){

     int number1 , number2 , total;
     float num1 , num2 , full;


//     cout<<"Enter First Number: ";
//     cin>>number1;

//     cout<<"Enter Second Number: ";
//     cin>>number2;


     cout<<"Enter First Number: ";
     cin>>num1;

//     cout<<"Enter Second Number: ";
//     cin>>num2;


//       total = add(number1 , number2);        

//       full = divide(num1 , num2);

//       total = max(number1 , number2); 

         full = power(number1, number2);
   
//       cout<<number1<< "^" <<number2 <<" = "<<full;	
         
         float minimum =  min(num1,num2);

//        int sqrRoot = sqrt(number1);
//        float sqrRoot = sqrt(num1);

//        int cubRoot = cbrt(number1);
//        float cubRoot = cbrt(num1);

           float round= ceil(num1);
  //          float round= floor(num1); 
 
         cout<<	round;
}


int add(int number1 , int number2){

   int sum= number1 + number2;

   return sum;
}


float divide(float number1 , float number2){

   float division= number1 / number2;

   return division;
}

int maximum(int number1 , int number2){

  if(number1 > number2){ 
    
   return number1;
}

  if(number2 > number1){ 
    
   return number2;

}
	return 0;

}


int power(int number1 , int number2){

   int powr= pow(number1,number2);

   return powr;
}

