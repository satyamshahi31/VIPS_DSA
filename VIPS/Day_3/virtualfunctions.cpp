#include<iostream>
using namespace std;

class parent{
    public:
   virtual void show()
    {
        cout<<"parent class"<<endl;
    }
};

class child : public parent{
public:
void show()
{
    cout<<"C"<<endl;
}
};
int main()
{
    parent *p;
    child p2;
    p = &p2;
    p->show();
    return 0;
}
