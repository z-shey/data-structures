#pragma once

struct AVLTreeNode
{
    int key;
    int height;
    AVLTreeNode* left;
    AVLTreeNode* right;

    AVLTreeNode(int v) : key(v), height(1), left(nullptr), right(nullptr)
    {
    }
};

class AVLTree
{
private:
    AVLTreeNode insert(int key, AVLTreeNode*& node);
    AVLTreeNode destroy(AVLTreeNode*& node);

    int getHeight(AVLTreeNode* node);
    int getBalanceFactor(AVLTreeNode* node);
    void updateHeight(AVLTreeNode* node);

    AVLTreeNode* rightRotate(AVLTreeNode* node);
    AVLTreeNode* leftRotate(AVLTreeNode* node);

    // 遍历
    void preOrder(const AVLTreeNode* node) const;
    void inOrder(const AVLTreeNode* node) const;
    void postOrder(const AVLTreeNode* node) const;

    // 根结点
    AVLTreeNode* root;

public:
    AVLTree();
    ~AVLTree();

    int getHeight(); // 获取节点高度
    int getBalanceFactor(); // 平衡因子
    void updateRotates(); // 更新节点高度

    // 插入与销毁
    void insert(int key);
    void destroy();

    // 遍历
    void preOrder() const;
    void inOrder() const;
    void postOrder() const;
};
