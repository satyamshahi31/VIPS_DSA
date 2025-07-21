#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Stack {
private:
    vector<T> v; 

public:
    void push(T val) {
        v.push_back(val);
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Empty";
            return;
        }
        v.pop_back();
    }

    T top() {
        if (isEmpty()) {
            throw out_of_range("Stack is empty");
        }
        return v.back();
    }

    bool isEmpty() {
        return v.empty();
    }

    int size() {
        return v.size();
    }

    void display() {
        cout << "Stack (top to bottom): ";
        for (int i = v.size() - 1; i >= 0; --i) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
};


int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.display();

    cout << "Top element: " << intStack.top() << endl;
    intStack.pop();
    intStack.display();

    Stack<string> stringStack;
    stringStack.push("Satyam");
    stringStack.push("Kumar");
    stringStack.display();
}
