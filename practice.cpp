#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int marks[5];
    for(int i=0;i<5;i++){
    cout<<"marks the print:"<<i+1;
    cin>>marks[i];
    }
    cout<<"Elemet is:";
    for(int i=0;i<5;i++){
        cout<<marks[i]<<" ";
    }


}
