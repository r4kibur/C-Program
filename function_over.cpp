#include<iostream>
using namespace std;

class person
{
    public:
    void display()
    {
        cout<<"I am a person"<<endl;

    }
};
class student
{
public:
    void display(){
    cout<<"I am student"<<endl;

    }

};

class teacher
{
public:
    void display(){
    cout<<"I am a Teacher"<<endl;
    }
};
int main()
{
    person p;
    p.display();
    student s;
    s.display();
    teacher t;
    t.display();

}
