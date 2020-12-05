#include<iostream>
using namespace std;

void display(int *num)
{
    *num=20;
    //passing the atgument

}
int main(){
    int x=10;
     cout<<"before calling the funtion x="<<x<<endl;
     display(&x);
     cout<<"after calling the funtion x="<<x<<endl;



}
