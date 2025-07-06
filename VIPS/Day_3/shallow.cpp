#include<iostream>
using namespace std;


class abc{
    public:
    int a;
    int *p;

    abc()
    {
        a = 5;
        p = new int(5);
    }

    // abc(abc &a3){
    //     a = a3.a;
    //     p = new int;
    //     *p = *(a3.p);
    // }

};

int main()
{
    abc a1;
    abc a2(a1);


    cout<<"First Object "<<a1.a<<endl;
    cout<<"First Object "<<*(a1.p)<<endl;

    cout<<"Copied OBject "<<a2.a<<endl;
    cout<<"Copied OBject "<<*(a2.p)<<endl;

    a1.a = 10;
    *(a1.p) = 20;
    
     cout<<"First Object "<<a1.a<<endl;
    cout<<"First Object "<<*(a1.p)<<endl;

    cout<<"Copied OBject "<<a2.a<<endl;
    cout<<"Copied OBject "<<*(a2.p)<<endl;


   



    return 0;

}