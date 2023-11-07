#pragma once

/**
 * @brief Tree class
 * @tparam T 
*/
template<typename T>
class BinaryTree
{
private:
    template <typename U>
    class BinaryTreeNode
    {
    public:
        U data;
        BinaryTreeNode<U>* left;
        BinaryTreeNode<U>* right;
        BinaryTreeNode(U value) : data(value), left(nullptr), right(nullptr) {}
    };

    BinaryTreeNode<T>* root;

public:
    BinaryTree() : root(nullptr) {}

    void insert(T value)
    {
        BinaryTreeNode<T>* newNode = new BinaryTreeNode<T>(value);
        if (root == nullptr)
        {
            root = newNode;
            return;
        }

        BinaryTreeNode<T>* currentNode = root;
        while (currentNode != nullptr)
        {
            if (value < currentNode->data)
            {
                if (currentNode->left == nullptr)
                {
                    currentNode->left = newNode;
                    return;
                }
                currentNode = currentNode->left;
            }
            else
            {
                if (currentNode->right == nullptr)
                {
                    currentNode->right = newNode;
                    return;
                }
                currentNode = currentNode->right;
            }
        }
    }
};