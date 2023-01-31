#include<iostream>


using namespace std;

main(){

    string name;
    cout<<"ENTER NAME: ";
    getline(cin,name);


   int count=0;

   while(name[count]!='\0'){
    count++;
   }

   if(count %2==0){
    cout<<"LENGTH IS EVEN";
   }
   else{
    cout<<"LENGTH IS ODD";
   }
}