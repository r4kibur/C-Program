#include<iostream>
using namespace std;

class student
{
    public:
        int id;
        float gpa;
        void display()
        {
            cout<<id<<" " <<gpa<<endl;


        }
};

int main()
{
    student rakib,sun,tanim;
    rakib.id=4532;
    rakib.gpa=4.2;
    rakib.display();

    sun.id=745;
    sun.gpa=4.5;
    sun.display();


}
