#pragma once

struct BinaryTreeNode
{
    int key;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int x) : key(x), left(nullptr), right(nullptr)
    {
    }
};

class BinaryTree
{
private:
    BinaryTreeNode* insert(int key, BinaryTreeNode*& node);
    BinaryTreeNode* destroy(BinaryTreeNode*& node);

    // 遍历二叉树
    void preOrder(const BinaryTreeNode* node) const;
    void inOrder(const BinaryTreeNode* node) const;
    void postOrder(const BinaryTreeNode* node) const;

    // 根节点
    BinaryTreeNode* root;

public:
    BinaryTree();
    ~BinaryTree();

    void insert(int key);
    void destroy();

    // 二叉树遍历
    void preOrder() const;
    void inOrder() const;
    void postOrder() const;
};
