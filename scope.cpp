#include<iostream>
using namespace std;
class rectangle{
    int height;
    int width;
public:
    void set(int h,int w);
    int area();
    rectangle();
    ~rectangle();
};
int rectangle::area()
{

    return height* width;
}
rectangle::rectangle()
{
    height =0;
    width=0;
    cout<<"constructor\n";
}
rectangle::~rectangle(){
cout<<"Destructor";
}
int main()
{
    rectangle ob;
    cout<<ob.area()<<" \n";


}
