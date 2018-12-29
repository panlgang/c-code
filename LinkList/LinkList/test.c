#include"list.h"
void test()
{
	Node* plist;
	Node* pos = NULL;
	InitList(&plist);
	PushBack(&plist, 1);
	PushBack(&plist, 2);
	PushBack(&plist, 3);
	PushBack(&plist, 2);
	PushBack(&plist, 4);
	PrintList(plist);
	//PopBack(&plist);
	//PrintList(plist);
	//PushFront(&plist,0);
	//PrintList(plist);
	//PushFront(&plist, -1);
	//PrintList(plist);
	//PrintList(plist);
	//PopFront(&plist);
	//PrintList(plist);
	pos = find(plist, 3);
	//if (pos!=NULL)
	//printf("%d\n", pos->data);
	//insert(&plist, pos, 5);
	//PrintList(plist);
	//Erase(&plist, pos);
	//PrintList(plist);
	//Remove(&plist, 10);
	RemoveAll(&plist, 2);
	PrintList(plist);
	DestroyList(&plist);

}
int main()
{
	test();
	system("pause");
	return 0;
}