#include<iostream>

using namespace std;

main(){

    int arraySize=0;
    int number;

    cout<<"ENTER SIZE OF ANY ARRAY: ";
    cin>>arraySize;


    int element;
    int arr[arraySize];
    int product=1;
    for (int i=0 ; i<arraySize; i++){

        cout<<"ENTER ELEMENT: ";
        cin>>arr[i];

    }


    for(int j=0 ; j<arraySize;j++){
        product=arr[0]*arr[j+1];
        cout<<product<<" ";
    }



}