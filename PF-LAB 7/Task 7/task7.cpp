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

   for(int i=count; i!='\0';i--){
    cout<<name[i-1];
   }
}