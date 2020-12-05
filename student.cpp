#include<iostream>
using namespace std;

class student
{
    public:
    int id;
    float gpa;
    void display()
    {
        cout<<id<<endl<<gpa<<endl;

    }
    void setvalu(int x,float y)
    {

        id=x;
        gpa=y;
    }
};

int main()
{
    student rakib,sun;
    rakib.setvalu(10,4.5);
    rakib.display();
    sun.setvalu(45,6.7);
    sun.display();
}
