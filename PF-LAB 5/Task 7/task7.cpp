#include<iostream>
#include<cstring>

using namespace std;

bool isSimilar(string word1 , string word2);

main(){

string word1 , word2;

cout<<"ENTER FIRST WORD: ";
cin>>word1;

cout<<"ENTER SECOND WORD: ";
cin>>word2;


isSimilar(word1,word2);

return 0; 

}

bool isSimilar(string word1 , string word2){

    

    word1= tolower(word1);
    word2= tolower(word2);

    if(word1 == word2){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;


}