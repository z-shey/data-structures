#include "BinaryTree.h"
#include <iostream>

BinaryTree::BinaryTree() : root(nullptr)
{
}

BinaryTree::~BinaryTree()
{
    destroy();
}

void BinaryTree::insert(int key)
{
    root = insert(key, root);
}

void BinaryTree::destroy()
{
    root = destroy(root);
}

void BinaryTree::preOrder() const
{
    preOrder(root);
    std::cout << std::endl;
}

void BinaryTree::inOrder() const
{
    inOrder(root);
    std::cout << std::endl;
}

void BinaryTree::postOrder() const
{
    postOrder(root);
    std::cout << std::endl;
}

BinaryTreeNode* BinaryTree::insert(int key, BinaryTreeNode*& node)
{
    if (node == nullptr)
    {
        node = new BinaryTreeNode(key);
    }
    else if (key < node->key)
    {
        node->left = insert(key, node->left);
    }
    else if (key > node->key)
    {
        node->right = insert(key, node->right);
    }
    
    return node;
}

BinaryTreeNode* BinaryTree::destroy(BinaryTreeNode*& node)
{
    if (node != nullptr)
    {
        destroy(node->left);
        destroy(node->right);
        delete node;
        node = nullptr;
    }
    
    return node;
}

void BinaryTree::preOrder(const BinaryTreeNode* node) const
{
    if (node != nullptr)
    {
        std::cout << node->key << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void BinaryTree::inOrder(const BinaryTreeNode* node) const
{
    if (node != nullptr)
    {
        inOrder(node->left);
        std::cout << node->key << " ";
        inOrder(node->right);
    }
}

void BinaryTree::postOrder(const BinaryTreeNode* node) const
{
    if (node != nullptr)
    {
        postOrder(node->left);
        postOrder(node->right);
        std::cout << node->key << " ";
    }
}
