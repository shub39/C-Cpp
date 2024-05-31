#include <iostream>
#include <queue>

using namespace std;

class node {
public:
  int data;
  node *left;
  node *right;

  node(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

node *buildtree() {
  int data;
  cout << "Enter Number: \n";
  cin >> data;
  node *root = new node(data);
  if (data == -1) {
    return NULL;
  }
  cout << "Enter Number to the left of " << data << ":\n";
  root->left = buildtree();
  cout << "Enter Number to the right of " << data << ":\n";
  root->right = buildtree();
  return root;
}

void levelTraversal(node *root) {
  queue<node *> q;
  q.push(root);
  q.push(NULL);
  while (!q.empty()) {
    node *temp = q.front();
    q.pop();
    if (temp == NULL) {
      cout << "\n";
      if (!q.empty()) {
        q.push(NULL);
      }
    } else {
      cout << temp->data << " ";
      if (temp->left) {
        q.push(temp->left);
      }
      if (temp->right) {
        q.push(temp->right);
      }
    }
  }
}

void inorder(node *root) {
  if (root == NULL) {
    return;
  }
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

void preorder(node *root) {
  if (root == NULL) {
    return;
  }
  cout << root->data << " ";
  inorder(root->left);
  inorder(root->right);
}

void postorder(node *root) {
  if (root == NULL) {
    return;
  }
  inorder(root->left);
  inorder(root->right);
  cout << root->data << " ";
}

void buildtreeLevelOrder(node *&root) {
  queue<node*> q;
  int data;
  cout << "Enter Root: \n";
  cin >> data;
  root = new node(data);
  q.push(root);
  while(!q.empty()) {
    node *temp = q.front();
    q.pop();
    cout << "Enter Left Node for: " << temp->data << "\n";
    int leftData;
    cin >> leftData;
    if(leftData != -1) {
      temp->left = new node(leftData);
      q.push(temp->left);
    }
    cout << "Enter Right Node for: " << temp->data << "\n";
    int rightData;
    cin >> rightData;
    if(rightData != -1) {
      temp->right = new node(rightData);
      q.push(temp->right);
    }
  }
}

int main() {
  //node *root = buildtree();
  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  node* root = NULL;
  buildtreeLevelOrder(root);

  cout << "inorder: ";
  inorder(root);
  cout << "\n";

  cout << "preorder: ";
  preorder(root);
  cout << "\n";

  cout << "postorder: ";
  postorder(root);
  cout << "\n";

  return 0;
}
