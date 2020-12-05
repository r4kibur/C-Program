#include<iostream>
using namespace std;

class persion
{

public:
    string name;
    int age;
    void display()
    {

        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class studen:public persion
{

public:
    int id;
    void display1()
    {

        cout<<"ID : "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age : "<<age<<endl;

    }
};
int main()
{
    persion ob;
    ob.age=45;
    student ob1;
    ob.name="rakib";
    ob1.id=466;
    ob.display1();


}
