#pragma once

#include <iostream>

#include "i_tree.h"

class test
{
private:
    static void test_tree()
    {
        std::cout << "Tree Test Loading Successful!" << std::endl;
        BinaryTree<int> binaryTree;
        binaryTree.insert(50);
        binaryTree.insert(60);
        binaryTree.insert(70);
        binaryTree.insert(80);
        binaryTree.insert(90);
        binaryTree.insert(40);
    }

public:
    static void test_main()
    {
        std::cout << "Main Test Loading Successful!" << std::endl;

        test_tree();
    }
};


