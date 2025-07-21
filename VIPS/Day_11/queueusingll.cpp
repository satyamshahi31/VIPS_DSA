#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Queue using Linked List
class Queue {
private:
    Node* frontNode;
    Node* rearNode;

public:
    Queue() {
        frontNode = nullptr;
        rearNode = nullptr;
    }

    // Enqueue: Add at rear
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (rearNode == nullptr) {
            frontNode = rearNode = newNode;
        } else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
    }

    // Dequeue: Remove from front
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }
        Node* temp = frontNode;
        frontNode = frontNode->next;
        if (frontNode == nullptr) {
            rearNode = nullptr;
        }
        delete temp;
    }

    // Front element
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return frontNode->data;
    }

    // Check if queue is empty
    bool isEmpty() {
        return frontNode == nullptr;
    }

    // Display the queue
    void display() {
        Node* temp = frontNode;
        cout << "Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Destructor to free memory
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display(); // 10 -> 20 -> 30 -> NULL

    cout << "Front: " << q.front() << endl;

    q.dequeue();
    q.display(); // 20 -> 30 -> NULL

    return 0;
}
