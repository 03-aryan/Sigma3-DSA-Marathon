#include <iostream>
#include <algorithm>
using namespace std;

// Structure to define a node in the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to calculate the height of a binary tree
int getHeight(Node* root) {
    if (root == nullptr) {
        return 0;
    } else {
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        return 1 + max(leftHeight, rightHeight);
    }
}

int main() {
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);

    cout << "The height of the binary tree is: " << getHeight(root) << endl;

    return 0;
}
