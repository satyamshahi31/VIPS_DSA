#include<iostream>
using namespace std;
class base{
    public:
    virtual void func() 
    {
        cout<<"base class function called"<<endl;
    }

    base()
    {
        cout<<"base constructor"<<endl;
    }

    ~base()
    {
        cout<<"base destructor"<<endl;
    }
    
};
class derived : public base{
    public:
    void func()
    {
        cout<<"derived class object called"<<endl;
    }
    derived(){
        cout<<"derived constructor"<<endl;

    }
    ~derived()
    {
        cout<<"derived destructor"<<endl;
    }
    
};
int main()
{
    // base b1;
   
    // b1.func(); //function call should be derived class

    derived *d1 = new derived();
    base *b1 = d1;
    delete b1;
    return 0;
}