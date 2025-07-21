#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
private:
    Node* head;

public:
    Stack() {
        head = NULL;
    }

    
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    void pop() {
        if (isEmpty()) {
            cout << "No element found";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack empty";
            return -1;
        }
        return head->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return head == NULL;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Stack elements:\n";
    st.display();

    cout << "Top of stack: " << st.top() << endl;

    st.pop();
    cout << "After pop:\n";
    st.display();

    return 0;
}
