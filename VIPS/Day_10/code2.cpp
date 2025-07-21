#include<iostream>
#include<vector>
using namespace std;


class Stack{
    vector<int>v;
    public:
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        if(!v.empty()){
        v.pop_back();
        }
        else{
            cout<<"Can't pop";
            return;
        }
    }
    
    int top(){
        if(!v.empty()){
          return v.back();
        }
        else{
            cout<<"size is zero we can't use top";
            return -1;
        }
    }

    void display()
    {
        for(int i = 0 ; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }




    

};

int main()
{
    Stack s1;
    s1.push(5);
    s1.push(2);
    s1.push(3);

    s1.display();

    cout<<s1.top()<<endl;

    s1.pop();

    s1.display();




    return 0;
}