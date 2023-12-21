#include "BinaryTree.h"

#include <iostream>

int main()
{
    BinaryTree tree;

    for (int i = 0; i < 20; i++)
    {
        tree.insert(i);
    }
    std::cout << "Pre order: ";
    tree.preOrder(); // 先序遍历

    std::cout << "In order: ";
    tree.inOrder(); // 中序遍历

    std::cout << "Post order: ";
    tree.postOrder(); // 后序遍历
    
    return 0;
}
