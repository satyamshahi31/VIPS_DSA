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

int height(Node* root){
    if(root == NULL){
        return 0;

    }
    int lh = height(root->left);
    int rh = height(root->right);

    return 1+max(lh , rh);
}

void printlevel(Node* root , int level){
    if(root == NULL){
        return ;
    }
    if(level == 1){
        cout<<root->data<<" ";
    }
    else{
        printlevel(root->left , level-1);
        printlevel(root->right , level-1);
    }
}

void ans(Node* root){
    int hgt = height(root);
    
    for(int i = 1 ; i <= hgt ; i++){
        printlevel(root , i);
    }

}

int main() {
    cout << "Enter nodes ";
    Node* root = buildtree();

    cout << "Tree built successfully!" << endl;

    cout<<height(root);
    cout<<endl;

    ans(root);
   
    return 0;
}