#include<iostream>

using namespace std;

main(){

    // int arr[5];

    // int add=0;



    // for(int i=0 ; i<=4 ;i++){
    //     cout<<"ENTER THE NUMBER: ";
    //     cin>>arr[i];

    //     add=add+arr[i];
    // }

    // cout<<"SUM IS: "<<add;


    int arraySize=0;

    cout<<"ENTER SIZE OF ANY ARRAY: ";
    cin>>arraySize;


    int element;
    int arr[arraySize];

    for (int i=0 ; i<arraySize; i++){

        cout<<"ELEMENT: ";
        cin>>element;

    }
    for (int j=0 ; j<arraySize; j++){

        cout<<element[j]<<" ";
    }


}