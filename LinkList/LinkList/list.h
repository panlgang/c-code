#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#ifndef __LIST_H__
#define __LIST_H__
typedef int DataType;
typedef struct Node
{
	DataType data;
	struct Node* nxet;

}Node,*pNode,*pList;
void InitList(pList* pplist);
pNode BuyNode(DataType d);
void PushBack(pList* pplist, DataType d);

void PrintList(pList plist);
void DestroyList(pList* pplist);
int GetListLength(pList plist);
void PopBack(pList* pplist);

void PushFront(pList* pplist,int d);
void PopFront(pList* pplist);

pNode find(pList plist, int d);

void insert(pList* pplist, pList pos, int d);

void Erase(pList* pplist, pList pos);

void Remove(pList* pplist, int d);

void RemoveAll(pList* pplist, int d);








#endif //__LIST_H__