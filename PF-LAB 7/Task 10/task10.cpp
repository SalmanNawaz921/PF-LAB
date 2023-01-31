#include<iostream>


using namespace std;

main(){

 int resistences;  
 cout<<"ENTER RESISTENCES: ";
 cin>>resistences;
 int arr[resistences];
 int add=0;

 for(int i=0 ; i<resistences;i++ ){

    cout<<"VALUE OF RESISTENCES: ";
    cin>>arr[i];

    add=add+arr[i];
 }

        cout<<add;
}

