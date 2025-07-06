#include<iostream>
using namespace std;

class complex{
    public:
    int real ;
    int imag;


    complex operator+(complex &obj){
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.real=5,c1.imag = 3;  //5 + 3i;
    c2.real = 10, c2.imag = 5;   //10+ 5i;

    c3 = c1+c2; //15+8i

    cout<<c3.real<<" "<<c3.imag<<endl;



    return 0;
}