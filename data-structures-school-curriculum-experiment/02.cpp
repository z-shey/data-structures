/*#include <stdlib.h>
#include <iostream>

typedef int ElementType;

typedef struct BinaryNode
{
	ElementType data;
	struct BinaryNode* leftChild, * rightChild;
} BinaryNode, * BinaryTree;

BinaryTree CreateBinaryTree(BinaryTree& tree) {
	int ch;
	std::cin >> ch;

	if (ch == 0)
	{
		tree = NULL;
	}
	else
	{
		if (!(tree = (BinaryNode*)malloc(sizeof(BinaryNode))))
		{
			exit(-2);
		}

		tree->data = ch;
		tree->leftChild = CreateBinaryTree(tree->leftChild);
		tree->rightChild = CreateBinaryTree(tree->rightChild);
	}
	return tree;
}

int FindMin(BinaryTree tree)
{
	if (tree != NULL)
	{
		while (tree->leftChild != NULL)
		{
			tree = tree->leftChild;
		}

		return tree->data;
	}
}

int FindMax(BinaryTree tree)
{
	if (tree != NULL)
	{
		while (tree->rightChild != NULL)
		{
			tree = tree->rightChild;
		}

		return tree->data;
	}
}

void Visit(ElementType element)
{
	std::cout << element << " ";
}

void PrintLDR(BinaryTree& tree)
{
	if (tree != NULL)
	{
		PrintLDR(tree->leftChild);
		Visit(tree->data);
		PrintLDR(tree->rightChild);

	}
}

int main()
{
	BinaryTree tree = NULL;

	// 1 0 2 0 6 3 0 0 0
	tree = CreateBinaryTree(tree);
	PrintLDR(tree);

	std::cout << "\nMin: " << FindMin(tree);
	std::cout << "\nMax: " << FindMax(tree);

	return 0;
}
*/




/*
Status InsertBST(BiTree& T, TElemType key)
{
	if (T == NULL)//递归结束条件
	{
		T = (BiTree)malloc(sizeof(BiTNode));//申请新的节点
		T->data = key;
		T->lchild = NULL;
		T->rchild = NULL;
		;//插入key
		//return T;
	}

	else if (key < T->data)

		InsertBST(T->lchild, key);//将key插入左子树

	else if (key > T->data)

		InsertBST(T->rchild, key);//将key插入右子树

	else if (key == T->data)

		;//key已在树中，不能插入key

	return OK;

}*/


/*
#include <stdio.h>
#include <stdlib.h>

typedef int Status; // 状态类型，这里假设 OK 为 1，ERROR 为 0
typedef int TElemType; // 数据类型，假设为 int

typedef struct BiTNode {
	TElemType data;
	struct BiTNode* lchild, * rchild;
} BiTNode, * BiTree;

Status InsertBST(BiTree* T, TElemType key) {
	if (*T == NULL) {
		*T = (BiTree)malloc(sizeof(BiTNode));
		if (!(*T)) {
			// 内存分配失败，返回错误状态
			return 0;
		}
		(*T)->data = key;
		(*T)->lchild = NULL;
		(*T)->rchild = NULL;
		// 插入key
		return 1; // 返回成功状态
	}
	else if (key < (*T)->data) {
		return InsertBST(&((*T)->lchild), key); // 将key插入左子树
	}
	else if (key > (*T)->data) {
		return InsertBST(&((*T)->rchild), key); // 将key插入右子树
	}
	else {
		// key已在树中，不能插入key
		return 0;
	}
}

void InOrderTraverse(BiTree T) {
	if (T) {
		InOrderTraverse(T->lchild);
		printf("%d ", T->data);
		InOrderTraverse(T->rchild);
	}
}

int main() {
	BiTree tree = NULL;
	int keys[] = { 5, 3, 8, 2, 4, 6, 9 };

	for (int i = 0; i < 7; i++) {
		InsertBST(&tree, keys[i]);
	}

	printf("In order traverse of the binary search tree:\n");
	InOrderTraverse(tree);
	printf("\n");

	return 0;
}
*/