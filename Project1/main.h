#pragma once

#include <stdlib.h>
#include <iostream>

typedef char ElementType;

typedef struct BinaryNode
{
	ElementType data;
	struct BinaryNode* leftChild, * rightChild;
} BinaryNode, * BinaryTree;

BinaryTree CreateBinaryTree(BinaryTree& Tree) {
	char ch;
	std::cin >> ch;

	if (ch == '#')
	{
		Tree = NULL;
	}
	else
	{
		if (!(Tree = (BinaryNode*)malloc(sizeof(BinaryNode))))
		{
			exit(-2);
		}

		Tree->data = ch;
		Tree->leftChild = CreateBinaryTree(Tree->leftChild);
		Tree->rightChild = CreateBinaryTree(Tree->rightChild);
	}
	return Tree;
}
void Visit(ElementType element)
{
	std::cout << element;
}
void InOrder(BinaryTree& Tree)
{
	if (Tree != NULL)
	{
		InOrder(Tree->leftChild);
		Visit(Tree->data);
		InOrder(Tree->rightChild);
	}
}
void PreOrder(BinaryTree& Tree)
{
	if (Tree != NULL)
	{
		Visit(Tree->data);
		PreOrder(Tree->leftChild);
		PreOrder(Tree->rightChild);
	}
}
void PostOrder(BinaryTree& Tree)
{
	if (Tree != NULL)
	{
		PostOrder(Tree->leftChild);
		PostOrder(Tree->rightChild);
		Visit(Tree->data);
	}
}
