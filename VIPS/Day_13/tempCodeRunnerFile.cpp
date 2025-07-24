#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};


node* insertInBST(node* root, int data) {
	// base case
	if (root == NULL) {
		root = new node(data);
		return root;
	}

	if (data <= root->data) { 
		root->left = insertInBST(root->left, data);
	}
	else { 
		root->right = insertInBST(root->right, data);
	}
	return root;
}


node* buildTree() {
	node* root = NULL;

	int data;
	cin >> data;
	while (data != -1) {
		root = insertInBST(root, data);
		// Data ko tree mei insert krega aur root
		// node ko return krega
		cin >> data;
	}

	return root;
}

// Preorder traversal: Root -> Left -> Right
void preorder(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder traversal: Left -> Root -> Right
void inorder(node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder traversal: Left -> Right -> Root
void postorder(node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
    return;
}

int main() {

	node* root = buildTree();
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;

	return 0;
}