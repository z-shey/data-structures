#include<stdio.h>
#include<stdlib.h>

#define OK 1
#define ERROR 0

typedef int Status;
typedef int ElemType;

typedef struct LNode {
    ElemType  data;
    struct  LNode* next;
}LNode, * LinkList;

LinkList p,q,s;
int i,j, e=0, n=6;



void CreateList_L(LinkList L, int n)
{     //逆位序输入n个元素的值，建立带头结点的单链线性表L。
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    for (i = n; i > 0; --i) {
        p = (LinkList)malloc(sizeof(LNode));
        scanf("%d", & p->data);
        p->next = L->next; L->next = p;
    }

}//CreateList_L


Status ListDelete_L(LinkList L, int i, ElemType e) {
    //在带头结点的单链线性表L中，删除第i个元素，并由e返回值
    p = L; j = 0;
    while (p->next && j < i - 1) {//寻找第i个结点，并令p指向其前趋
        p = p->next;  ++j;
    }
    if (!(p->next) || j > i - 1)  return ERROR; //删除位置不合理
    q = p->next; p->next = q->next;        //删除并释放结点
    e = q->data; free(q);
    return OK;
}//ListDelete_L

Status ListInsert_L(LinkList L, int i, ElemType e)
{ // 在带头结点的单链线性表L中第i个位置之前插入元素e 
    p = L; j = 0;
    while (p && j < i - 1) //寻找第i-1个结点 

    {
        p = p->next;
        ++j;
    }
    if (!p || j > i - 1) return ERROR;//i小于1或者大于表长加1
    s = (LinkList)malloc(sizeof(LNode)); // 生成新结点
    s->data = e; s->next = p->next; // 插入L中
    p->next = s;
    return OK;
}//ListInsert_L

LinkList L = NULL;
int n;
int e;

int main() {



    CreateList_L(L, n);
    ListDelete_L(L, i, e);
    ListInsert_L(L, i, e);

    return 0;
}