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

Status Delete(BiTree* p) {
    BiTree q, s;
    if (!(*p)->rchild) {
        q = *p;
        *p = (*p)->lchild;
        free(q);
    }
    else if (!(*p)->lchild) {
        q = *p;
        *p = (*p)->rchild;
        free(q);
    }
    else {
        q = *p;
        s = (*p)->lchild;
        while (s->rchild) {
            q = s;
            s = s->rchild;
        }
        (*p)->data = s->data;
        if (q != *p) {
            q->rchild = s->rchild;
        }
        else {
            q->lchild = s->lchild;
        }
        free(s);
    }
    return 1;
}

Status DeleteBST(BiTree* T, TElemType key) {
    if (!(*T)) {
        return 0; // 树为空，返回错误状态
    }
    else {
        if (key == (*T)->data) {
            return Delete(T);
        }
        else if (key < (*T)->data) {
            return DeleteBST(&((*T)->lchild), key);
        }
        else {
            return DeleteBST(&((*T)->rchild), key);
        }
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

    DeleteBST(&tree, 3);

    printf("In order traverse after deleting 3:\n");
    InOrderTraverse(tree);
    printf("\n");

    return 0;
}

*/