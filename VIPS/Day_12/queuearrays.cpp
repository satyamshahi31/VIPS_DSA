#include<iostream>
using namespace std;

class LinearQueue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    LinearQueue(int s){
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;

    }
    bool isEmpty(){
        return front == -1 || front > rear;
    }
    bool isFull(){
        return rear == size -1;
    }

    void enqueue(int value){
        if(isFull()){
            cout<<"Queue full"<<endl;
            return ;
        }
        if(isEmpty()){
            front = rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = value;
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue Empty"<<endl;
            return;
        }
        cout<<"Removed "<<arr[front]<<endl;
        front++;
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue Empty"<<endl;
            return ;
        }

        cout<<"Queue elements are";
        for(int i = front ; i <= rear ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main()
{
    LinearQueue l1(5);
     l1.enqueue(5);
    l1.enqueue(6);
    l1.enqueue(7);
    l1.enqueue(8);
    l1.enqueue(9);
    l1.display();
    l1.dequeue();
    l1.display();
    l1.enqueue(2);
    l1.display();

}