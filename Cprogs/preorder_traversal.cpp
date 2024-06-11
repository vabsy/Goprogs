#include <iostream>
#include <stdlib.h>

class node
{
    public:
    int key;
    node *left, *right;
};

node * createNode(const int& key)
{
    node * new_node = new node();
    new_node->key = key;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}


void preorderTraversal(node ** root)
{

    if(*root == NULL)
    {
        return;
    }
    std::cout << (*root)->key << " " ;

    preorderTraversal(&((*root)->left));

    preorderTraversal(&(*root)->right);
}


int main()
{
    node * root = createNode(2);
    root->left = createNode(4);
    root->right = createNode(8);
    root->left->left = createNode(5);
    root->left->right = createNode(7);
    root->right->left = createNode(1);
    root->right->right = createNode(10);

    preorderTraversal(&root);

}
