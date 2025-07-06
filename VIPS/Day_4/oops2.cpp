#include<iostream>
using namespace std;
class Complex{ //user defined data type
    public:
    int real;
    int imag;

    // Complex add (Complex c){
    //     Complex temp;
    //     temp.real = real + c.real;
    //     temp.img = img + c.img;
    //     return temp;

        
    // }

    // Complex operator+ (Complex c){
    //     Complex ans; // NEW VARIABLE
    //     ans.real = real + c.real;  //c3 = c2.addition(c1) - c1me c2 add - 
    //     ans.imag = imag + c.imag;
    //     return ans;

    // }



};
int main()
{
    Complex c1,c2,c3;
    c1.real=5,c1.imag = 3;
    c2.real = 10, c2.imag = 5;
    // c3 = c1 + c2; // overload  

    // 1- Function , 2- Operator Overload

    //function - returntype function_name (parameters){
      // defination
   // };

   //  1-  main tumse paise le lu 
   //2 - ya m tumhe paise de do
   //3- kisi common dost ko bula k use dono paise de de


  c3 = c1 + c2;

    // c3 = c1.add(c2);
    cout<<c3.real<<"+"<<c3.imag<<"i"<<endl;
}
