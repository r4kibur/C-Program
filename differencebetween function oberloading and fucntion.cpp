#include<iostream>
using namespace std;

class person
{

public:
   virtual void show()
    {
        cout<<"I am person"<<endl;
    }
};
class student : public person{
public:
    void show(){
    cout<<"I am a student"<<endl;

    }
};
class techer:public person{

public:
    void show()
    {
        cout<<"I am techer"<<endl;
    }

};

int main()
{
  student s;
  techer t;
  person *p;
  p=&s;
  p->show();
  p=&t;
  p->show();

}
