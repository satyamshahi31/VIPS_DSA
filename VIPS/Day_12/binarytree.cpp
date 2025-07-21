#include<iostream>
#include<algorithm>
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
// Preorder traversal: Root -> Left -> Right
void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder traversal: Left -> Root -> Right
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder traversal: Left -> Right -> Root
void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
    return;
}

int height (Node* root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);

    return 1+max(lh,rh);
}
void printLevel(Node* root, int level) {
    if (!root) return;
    if (level == 1)
        cout << root->data << " ";
    else {
        printLevel(root->left, level - 1);
        printLevel(root->right, level - 1);
    }
}
void printLevelOrderRecursive(Node* root) {
    int h = height(root);
    for (int i = 1; i <= h; i++)
        printLevel(root, i);
}

int main() {
    cout << "Enter nodes ";
    Node* root = buildtree();

    cout << "Tree built successfully!" << endl;

    // preorder(root);
    // inorder(root);
    // postorder(root);
    // cout<<endl;
    // cout<<height(root);
    printLevelOrderRecursive(root);
    return 0;
}