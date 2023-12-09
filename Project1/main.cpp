#include "main.h"
#include <iostream>

BinaryTree tree = NULL;

int main()
{
    tree = CreateBinaryTree(tree);

    std::cout << "PreOrder: ";

    PreOrder(tree);

    std::cout << "\nInOrder: ";

    InOrder(tree);

    std::cout << "\nPostOrder: ";

    PostOrder(tree);

	return 0;
}
