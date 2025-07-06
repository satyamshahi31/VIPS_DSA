#include<iostream>
using namespace std;
class rectangle{
    public:
    int len;
    int bre;
    rectangle()
    {
        cout<<"constructor called"<<endl;
    }

    rectangle(int len , int bre){

        cout<<"parameterised constructor called"<<endl;
        len = len;
        bre = bre;
    }
    rectangle(rectangle & r4){

    cout<<"copy constructor called"<<endl;
    len = r4.len;
    bre = r4. bre;
    }

    ~rectangle()
    {
        cout<<"destructor called"<<endl;
    }
};
int main()
{

    rectangle r;
    r.len = 10;
    r.bre = 20;

    rectangle r2(10,15);
    rectangle r3(r2);

    return 0;

}