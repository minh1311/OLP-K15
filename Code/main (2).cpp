#include <iostream>

using namespace std;
class SP
{
    int a1,b1;
public:
    SP(int a1,int b1);
    SP();
    void xuat();
    SP operator + (SP sp2);
    SP operator - (SP sp2);
};
SP::SP(int a1,int b1)
{
    this->a1=a1;
    this->b1=b1;
}
SP::SP()
{
    a1=0;
    b1=0;
}
void SP::xuat()
{
    cout<<"SP:"<<a1<<" + i*"<<b1<<endl;
}
SP SP::operator+(SP sp2)
{
    SP sp;
    sp.a1=a1+sp2.a1;
    sp.b1=b1+sp2.b1;
    return sp;
}
SP SP::operator-(SP sp2)
{
    SP sp;
    sp.a1=a1-sp2.a1;
    sp.b1=b1-sp2.b1;
    return sp;
}
int main()
{
    SP sp1(1,2),sp2(2,3),sp3,sp4;
    sp3=sp1+sp2;
    sp3.xuat();
    sp4=sp1-sp2;
    sp4.xuat();
}
