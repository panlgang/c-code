#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#ifndef __LIST_H__
#define __LIST_H__

typedef struct Node
{
	int data;
	struct Node* pNext;
}Node, *pNode;
void init(pNode* head);  //初始化头指针
void destoryList(pNode* phead);//释放链表
pNode buyNode(int data);   //创建一个节点
void pushFront(pNode* phead, int data);  //头插节点 
void insertNode(pNode* phead,pNode pos,int data);  //任意插入一个节点
void pushBack(pNode* phead, int data);  //尾插节点
void printList(pNode phead);   //打印
void reverseList(pNode* phead);  //链表逆置
int GetListLength(pNode phead); //获取链表长度
pNode findNode(pNode phead, int data);  //查找链表中的某一元素，返回指向该节点的指针
void modifyNode(pNode phead, pNode pos, int data);  //修改某一节点的数据域
void popFront(pNode* phead);   //头删
void popBack(pNode* phead);    //尾删
void delNode(pNode* phead,pNode pos);    //删除任一位置的节点
void removeNde(pNode* phead, int data);   //根据数据域删除对应节点（第一次出现的）
#endif //_LIST_H__