#include<iostream>
using namespace std;

    int x=10; //global valu

/*void display()
{
    cout<<"inside the display x="<<x<<endl;
}*/
int main()
{
    int x=50;
    ::x=20;   //local valu
    cout<<"inside the main function x= "<<::x<<endl;

    }
