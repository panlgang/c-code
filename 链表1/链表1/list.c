#include "list.h"

void init(pNode* head)      //初始化
{
	assert(head != NULL);
	*head = NULL;
}

void destoryList(pNode* phead)  //释放链表
{
	pNode pDel = *phead;
	pNode pCur = *phead;
	assert(phead != NULL);
	while (pCur != NULL)
	{
		pDel = pCur;
		pCur = pCur->pNext;
		free(pDel);

	}
	*phead = NULL;

}

pNode buyNode(int data)    //创建一个新节点
{
	pNode newNode = (pNode)malloc(sizeof(Node));
	if (newNode == NULL)
	{
		return NULL;
	}
	newNode->data = data;
	newNode->pNext = NULL;
	return newNode;
}

void pushBack(pNode* phead, int data)  //传头指针的地址，若是空链表需更改头指针的指向，即更改其指。  
{
	assert(phead != NULL);
	pNode newNode = buyNode(data);
	pNode pCur = *phead;
	if (*phead == NULL)   //空链表
	{
		*phead = newNode;
	}
	else
	{
		while (pCur->pNext != NULL)
		{
			pCur = pCur->pNext;
		}
		pCur->pNext = newNode;
	}
}

void pushFront(pNode* phead, int data) //头插节点
{
	assert(phead != NULL);
	pNode newNode = buyNode(data);
	newNode->pNext = (*phead);   //新节点的指针域指向原来头节点的指向
	*phead = newNode;            //头节点指向新产生的节点
}


void printList(pNode phead)   //打印
{
	pNode pCur = phead;
	while (pCur != NULL)
	{
		printf("%d -->", pCur->data);
		pCur = pCur->pNext;
	}
	printf("Over\n");
}

void insertNode(pNode* phead, pNode pos, int data) //默认插到pos的前面
{
	assert(phead);
	assert(pos);
	assert(*phead);
	pNode newNode = buyNode(data);
	pNode cur = *phead;
	if (pos == *phead)   //只有一个节点的时候
	{
		*phead = newNode;
		newNode->pNext = pos;
	}
	while (cur != NULL && cur->pNext != pos)
	{
		cur = cur->pNext;
	}
	if (cur == NULL)
	{
		return;
	}
	cur->pNext = newNode;
	newNode->pNext = pos;
}

void reverseList(pNode* phead)  //链表逆置，三指针法
{
	if (phead == NULL || (*phead)->pNext == NULL)
	{
		return;
	}
	pNode prev = (*phead);
	pNode cur = prev->pNext;
	pNode temp = NULL;
	while (cur != NULL)
	{
		temp = cur->pNext;
		cur->pNext = prev;
		prev = cur;
		cur = temp;
	}
	(*phead)->pNext = NULL;
	(*phead) = prev;
}
pNode findNode(pNode phead, int data)
{
	assert(phead);
	pNode cur = phead;
	while (cur != NULL  && cur->data != data)
	{
		cur = cur->pNext;
	}
	return cur;
}

void modifyNode(pNode phead, pNode pos, int data)  //修改某一节点的数据域
{
	assert(pos != NULL);
	assert(phead != NULL);
	pNode cur = phead;
	while (cur != NULL && cur != pos)
	{
		cur = cur->pNext;
	}
	cur->data = data;
}

int GetListLength(pNode phead)  //获取链表长度
{
	pNode pCur = phead;
	int count = 0;
	while (pCur != NULL)
	{
		count++;
		pCur = pCur->pNext;
	}
	return count;
}

void popFront(pNode* phead)   //头删
{
	assert(phead != NULL);
	assert((*phead) != NULL);
	pNode del = *phead;
	*phead = del->pNext;
	free(del);
	del = NULL;
}

void popBack(pNode* phead) //尾删
{
	assert(phead != NULL);
	assert((*phead) != NULL);
	pNode del = *phead;
	pNode prev = *phead;
	if ((*phead)->pNext == NULL)
	{
		free(*phead);
		*phead = NULL;
		return;
	}
	while (del->pNext != NULL)
	{
		prev = del;
		del = del->pNext;
	}
	free(del);
	del = NULL;
	prev->pNext = NULL;
}

void delNode(pNode* phead, pNode pos)    //删除任意位置的节点
{
	assert(pos != NULL);
	assert(phead != NULL);
	assert(*phead != NULL);
	pNode del = *phead;
	pNode prev = *phead;
	if (pos == (*phead))
	{
		*phead = pos->pNext;
		free(pos);
		return;
	}
	while (del!= NULL && del != pos)
	{
		prev = del;
		del = del->pNext;
	}
	if (del != NULL)
	{
		prev->pNext = del->pNext;
		free(del);
		del = NULL;
	}
	
}

void removeNde(pNode* phead, int data)   //根据数据域删除对应节点（第一次出现的）
{
	assert(phead != NULL);
	assert((*phead) != NULL);
	pNode del = *phead;
	pNode prev = *phead;
	while (del != NULL && del->data != data)
	{
		prev = del;
		del = del->pNext;
	}
	if (del == (*phead))    //第一个节点需要单独处理
	{
		(*phead) = del->pNext;
		free(del);
		del = NULL;
	}
	else if (del != NULL)  // 其它节点统一处理
	{
		prev->pNext = del->pNext;
		free(del);
		del = NULL;
	}
}

