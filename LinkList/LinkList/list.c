#include"list.h"
void InitList(pList* pplist)
{
	assert(pplist != NULL);
	*pplist = NULL;
}

void DestroyList(pList* pplist)
{
	assert(pplist);
	pNode cur = *pplist;
	while (cur != NULL)
	{
		pNode del = cur;
		cur = cur->nxet;
		free(del);
	}
	*pplist = NULL;
}

pNode BuyNode(DataType d)
{
	pNode newNode = (pNode)malloc(sizeof(Node));
	newNode->data = d;
	newNode->nxet = NULL;
	return newNode;
}
void PushBack(pList* pplist,DataType d)
{
	assert(pplist != NULL);
	if (*pplist == NULL)
	{
		*pplist = BuyNode(d);
	}
	else
	{
		pNode cur = *pplist;
		while (cur->nxet != NULL)
		{
			cur = cur->nxet;
		}
		cur->nxet = BuyNode(d);
	}
}

int GetListLength(pList plist)
{
	pNode cur = plist;
	int length = 0;
	while (cur != NULL)
	{
		length++;
		cur = cur->nxet;
	}
	return length;
}

//void PopBack(pList* pplist)//删除尾结点
//{
//	assert(pplist != NULL);
//	if (*pplist == NULL)
//		return;
//	else if ((*pplist)->nxet == NULL)
//	{
//		free(*pplist);
//		*pplist = NULL;
//	}
//	else
//	{
//		pNode cur = *pplist;
//		while (cur->nxet->nxet != NULL)
//		{
//			cur = cur->nxet;
//		}
//		free(cur->nxet);
//		cur->nxet = NULL;
//	}	
//}

void PopBack(pList* pplist)//删除尾结点
{
	assert(pplist != NULL);
	if (*pplist == NULL)
		return;
	else if ((*pplist)->nxet == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		pNode cur = *pplist;
		pNode prev = NULL;
		while (cur->nxet != NULL)
		{
			prev = cur;
			cur = cur->nxet;
		}
		free(cur);
		prev->nxet = NULL;
	}
}

void PushFront(pList* pplist,int d)//头插
{
	assert(pplist);
	pNode newNode = BuyNode(d);
	newNode->nxet = *pplist;
	*pplist = newNode;
}

void PopFront(pList* pplist)//头删
{
	assert(pplist != NULL);
	pNode del = *pplist;
	if (*pplist == NULL)
		return;
	*pplist = (*pplist)->nxet;
	free(del);
	del = NULL;
}

pNode find(pList plist, int d)
{
	pList cur = plist;
	while (cur != NULL&&cur->data != d)
	{
		cur = cur->nxet;
	}
	return cur;
	//while (cur!=NULL)
	//{
	//	if (cur->data == d)
	//	{
	//		return cur;
	//	}
	//	cur = cur->nxet;
	//}
	//return cur;
}

void insert(pList* pplist, pList pos, int d)
{
	assert(pplist != NULL );
	assert(*pplist != NULL);
	assert(pos != NULL);
	pNode newNode = NULL;
	if (pos == *pplist)  //只有一个结点
	{
		//PushFront(pplist, d);
		newNode = BuyNode(d);
		newNode->nxet = *pplist;
		*pplist = newNode;	
	}
	else
	{
		pList cur = *pplist;
		//pList prev = NULL;
		//while (cur != pos&&cur != NULL)
		//{
		//	prev = cur;
		//	cur = cur->nxet;
		//}
		//if (cur != NULL)
		//{
		//	newNode = BuyNode(d);
		//	prev->nxet = newNode;
		//	newNode->nxet = cur;
		//}
		while (cur != NULL && cur->nxet != pos)//只有当cur不为空的时候才能cur->nxet;
		{
			cur = cur->nxet;
		}
		if (cur != NULL)
		{
			newNode = BuyNode(d);
			cur->nxet = newNode;;
			newNode->nxet = pos;
		}
	}
}

void Erase(pList* pplist, pList pos)
{
	assert(pos != NULL);
	assert(pplist != NULL);
	assert(*pplist != NULL);
	if (pos == *pplist)
	{
		*pplist = pos->nxet;
		free(pos);
		pos = NULL;
	}
	else
	{
		pNode cur = *pplist;
		while (cur != NULL&&cur->nxet != pos)
		{
			cur = cur->nxet;
		}
		if (cur != NULL)
		{
			cur->nxet = pos->nxet;
			free(pos);
			pos = NULL;
		}
	}
}

void Remove(pList* pplist, int d)
{
	assert(pplist!=NULL);
	assert(*pplist);
	pNode cur = *pplist;
	pNode prev = NULL;
	while (cur != NULL)
	{
		
		if (cur->data == d)
			break;
		prev = cur;
		cur = cur->nxet;
	}
	if (cur == *pplist)
	{
		*pplist = cur->nxet;
		free(cur);
		cur = NULL;
	}
	else if (cur != NULL)
	{
		prev->nxet = cur->nxet;
		free(cur);
		cur = NULL;
	}
	else
		return;
}

void RemoveAll(pList* pplist, int d)
{
	assert(pplist != NULL);
	assert(*pplist);
	pNode cur = *pplist;
	pNode prev = NULL;
	while (cur != NULL)
	{

		if (cur->data == d)
		{
			if (cur == *pplist)
			{
				*pplist = cur->nxet;
				free(cur);
				cur = *pplist;
			}
			else if (cur != NULL)
			{
				prev->nxet = cur->nxet;
				free(cur);
				cur = prev;
			}
			else
				return;
		}
			
		prev = cur;
		cur = cur->nxet;
	}
	
}

void PrintList(pList plist)
{
	pNode cur = plist;
	if (cur == NULL)
	{
		printf("空链表\n");
	}
	else
	{
		while (cur != NULL)
		{
			printf("%d-->", cur->data);
			cur = cur->nxet;
		}
		printf("Over\n");
	}
}