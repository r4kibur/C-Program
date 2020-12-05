#include<iostream>
using namespace std;
 class retangle
 {
private:
    int hight;
    int width;
public:
    void set(int h,int w);
    int area();
 };
inline int retangle::area()
 {
     return hight*width;
 }
 void retangle::set(int h, int w){
 hight =h;
 width =w;
 }

int main()
{
    retangle ob;
 ob.set(5,6);
    cout<<ob.area();
}
