#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
	int data;
	struct BiTNode* lchild, * rchild;
}BiTNode, * BiTree;



BiTree   InsertBST(BiTree T, int key)
{
    if (T == NULL)//递归结束条件
    {
        T = (BiTree)malloc(sizeof(BiTNode));//申请新的节点
        T->data = key;
        T->lchild = NULL;
        T->rchild = NULL;
        printf("insert -> %d\n", key);//插入key
        //return T;
    }
    else if (key < T->data)
            T->lchild = InsertBST(T->lchild, key);//将key插入左子树
    else if (key > T->data)
        T->rchild = InsertBST(T->rchild, key);//将key插入右子树
    else if (key == T->data)
        printf("haved -> %d\n", key);
        ;//key已在树中，不能插入key
    return T;
}


int Delete(BiTree p)
{
    BiTree q, s;
    if (!p->rchild)//右子树为空
    {
        q = p; p = p->lchild; free(q);
    }
    else if (!p->lchild)//左子树为空
    {
        q = p; p = p->rchild; free(q);
    }
    else
    {
        q = p; s = p->lchild;
        while (s->rchild)
        {
            q = s; s = s->rchild;
        }
        p->data = s->data;
        if (q != p)
            q->rchild = s->rchild;
        else
            q->lchild = s->lchild;
        free(s);
    }
    return 1;
}


int DeleteBST(BiTree T, int key)
{
    if (!T)
        return 0;
    else
    {
        if (key == T->data)
            return Delete(T);
        else if (key < T->data)
            DeleteBST(T->lchild, key);
        else
            DeleteBST(T->rchild, key);
        return 1;
    }
}

void print(BiTree T) {
    if (T != NULL)
    {
        print(T->lchild);
        printf("%d\t", T->data);
        print(T->rchild);
    }
}

int main()
{
    BiTree T = NULL;
    int key, i;
    int a[7] = { 45, 24, 53, 45, 12, 24, 90 };
    for (i = 0; i < 7; i++)
    {
        key = a[i];
        T = InsertBST(T, key);
    }
    printf("InOrder -> \n");
    print(T);

    printf("\ndelete -> ");
    key = 90;
    DeleteBST(T, key);
    print(T);
    return 0;
}