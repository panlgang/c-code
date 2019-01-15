#include "list.h"
test()
{
	pNode phead;
	pNode ret = NULL;
	init(&phead);
	int len = 0;
	for (int i = 5; i < 10; i++)
	{
		pushBack(&phead, i);
	}
	for (int i = 0; i < 5; i++)
	{
		pushFront(&phead, i);
	}
	modifyNode(phead, phead->pNext->pNext->pNext, 100);
	//popFront(&phead);
	//popBack(&phead);
	//popBack(&phead);
	printList(phead);
	delNode(&phead, phead->pNext);
	removeNde(&phead, 9);
	printList(phead);
	ret = findNode(phead, 9);
	if (ret != NULL)
	printf("%d\n", ret->data);
	//insertNode(&phead, phead->pNext->pNext->pNext, -1);
	//printList(phead);
	//reverseList(&phead);
	//printList(phead);
	//len = GetListLength(phead);
	//printf("len = %d\n", len);
	destoryList(&phead);
}
int main()
{
	test();
	system("pause");
	return 0;
}