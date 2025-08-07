#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Insert into BST
Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

// Preorder Traversal
void preorder(Node* root) {
    if (root) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Inorder Traversal
void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Postorder Traversal
void postorder(Node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

// Subtree Sum
int subtreeSum(Node* root) {
    if (root == nullptr) return 0;
    return root->data + subtreeSum(root->left) + subtreeSum(root->right);
}

// Check if Left Sum > Right Sum
void checkCondition(Node* root) {
    if (root) {
        int leftSum = subtreeSum(root->left);
        int rightSum = subtreeSum(root->right);
        cout << "Node " << root->data << ": Left sum = " << leftSum
             << ", Right sum = " << rightSum
             << ", Condition: " << (leftSum > rightSum ? "True" : "False") << endl;

        checkCondition(root->left);
        checkCondition(root->right);
    }
}

// Main function (user input, no STL)
int main() {
    int n;
    cout << "Enter number of values: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid number of values (1–100 allowed)." << endl;
        return 1;
    }

    int values[100]; // Fixed-size array
    cout << "Enter the values: ";
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    Node* root = nullptr;
    for (int i = 0; i < n; i++) {
        root = insert(root, values[i]);
    }

    cout << "\nPreorder: ";
    preorder(root);
    cout << "\nInorder: ";
    inorder(root);
    cout << "\nPostorder: ";
    postorder(root);

    cout << "\n\nCheck Left > Right Subtree Sum:\n";
    checkCondition(root);

    return 0;
}