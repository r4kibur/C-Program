#include<iostream>
using namespace std;

class mobileuser
{
public:
    void call()
    {
        cout<<"HELLO!" <<endl;
    }
    virtual void sendMessage()=0;

};
class Rahim:public mobileuser{
public:
    void sendMessage()
    {
        cout<<"This is Rahim"<<endl;
    }
};
class Tanim:public mobileuser{
public:
    void sendMessage(){
    cout<<"This is Tanim!"<<endl;
    }
};

int main()
{
    mobileuser *m;
    Rahim r;
    Tanim t;

    m=&r;
    m->call();
    m->sendMessage();
    m=&t;
    m->sendMessage();

}
