#include<iostream>

using namespace std;

main(){

    int arraySize=0;
    int number;

    cout<<"ENTER SIZE OF ANY ARRAY: ";
    cin>>arraySize;


    int element;
    int arr[arraySize];
    bool flag=false;

    for (int i=0 ; i<arraySize; i++){

        cout<<"ENTER ELEMENT: ";
        cin>>arr[i];

    }
    
    cout<<"ENTER WHICH NO YOU WANT TO FOUND:";
    cin>>number;

    for(int j=0 ; j<arraySize;j++){
        if(arr[j]==number){
            flag=true;
        }
    }

    if(flag==true){
        cout<<"NUMBER FOUND";
    }
    else{
        cout<<"NOT FOUND";
    }


}