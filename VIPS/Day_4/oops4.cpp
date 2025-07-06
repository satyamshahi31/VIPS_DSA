#include<iostream>
using namespace std;
class A{
    int a = 20, b= 10;
    public :
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    friend class B;
};

class B{
    public:
    void add(A r)//reference of class A
    {
        int add = r.a+r.b;
        cout<<"Sum of A and B : "<<add;
    }
};
int main()
{
    A obj;
    B obj2;
    obj.show();
    obj2 .add(obj);
    return 0;
}