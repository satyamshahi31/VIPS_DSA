#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    CircularQueue(int s){
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;

    }
    bool isEmpty(){
        return front == -1 ;
    }
    bool isFull(){
        return (rear+1)%size == front;
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
            rear = (rear+1)%size;
        }
        arr[rear] = value;
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue Empty"<<endl;
            return;
        }
        cout<<"Removed "<<arr[front]<<endl;

        if(front == rear){
            front = rear = -1;
        }
        else{
            front = (front+1)%size;
        }
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue Empty"<<endl;
            return ;
        }

        cout<<"Queue elements are";
        int i = front;
        while(true){
            cout<<arr[i]<<" ";
            if(i == rear){
                break;
            }
            i = (i+1)%size;
        }
        cout<<endl;
    }

};

int main()
{
    CircularQueue l1(5);
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
    return 0;

}