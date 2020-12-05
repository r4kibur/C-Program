#include<iostream>
using namespace std;

void displayarry(int num[], int size){

for(int i=0;i<size;i++)
cout<<num[i]<<""<<endl;


}

int main()
{
 int number[5]={10,20,30,40,50};

 displayarry(number,5);
}
