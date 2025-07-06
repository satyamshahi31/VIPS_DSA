#include<iostream>
using namespace std;

class Car{
    public:
    int a;
    protected:
    int b;
    private:
    int c;
    friend void func();

};
void func()
{
    Car c1;
    c1.a=10;
    c1.b=20;
    c1.c= 30;
    cout<<c1.a<<" "<<c1.b<<" "<<c1.c;
    
}
int main()
{

func();
return 0;
}