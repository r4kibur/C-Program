#include<iostream>
using namespace std;

class A
{
private:
    int id= 101;
    string name="Rakib";
public:
    friend class B;
};
class B
{
public:
    void show(A ob)
    {
        cout<<ob.id<<endl;
        cout<<ob.name<<endl;
    }
};

int main()
{
    A ob1;
    B ob2;
    ob2.show(ob1);

}
