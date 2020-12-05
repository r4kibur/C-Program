#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    while(1){
    int guessNumber,randomNumber;
    cout<<"ENter Your GuessNumber 1-5: ";
    cin>>guessNumber;
    randomNumber=rand()%5+1;
    if(guessNumber==randomNumber){
        cout<<"You have win!"<<endl;
    }
    else{
        cout<<"You have lost"<<endl;
        cout<<"Win Number: \n"<<randomNumber<<endl<<endl;
    }
    }



}
