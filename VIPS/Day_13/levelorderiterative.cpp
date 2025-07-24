#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }

};

Node* buildtree()
{
    int d;
    cin>>d;

    if(d == -1){
        return NULL;

    }
    else{
        Node* n = new Node(d);
        n->left = buildtree();
        n->right = buildtree();
        return n;
    }
}

void levelOrder(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

int main() {
    cout << "Enter nodes ";
    Node* root = buildtree();

    cout << "Tree built successfully!" << endl;
    levelOrder(root);

    
    return 0;
}