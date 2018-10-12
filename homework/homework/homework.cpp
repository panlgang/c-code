#define _CRT_SECURE_NO_WARNINGS 2
//#include <iostream>
//using namespace std;
//class Sale
//{
//public:
//	Sale(int n, int q, double pri) : num(n), qua(q), price(pri){};
//	static double average(Sale *, int n);
//	static void display(Sale *, int n);
//private:
//	int num;
//	int qua;
//	double price;
//	static double discount;
//	static double sum;
//	static int count;
//};
//double Sale::discount = 0.98;
//double Sale::sum = 0;
//int Sale::count = 0;
//double Sale::average(Sale *cc, int n)
//{
//	Sale *p;
//	for (p = cc; p<cc + n; p++){
//		if (p->qua>10)
//			p->price *= discount;
//		sum += ((p->price)*(p->qua));
//		count += p->qua;
//	}
//	return sum / count;
//}
//void Sale::display(Sale *cc, int n)
//{
//	cout << "Average= " << Sale::average(cc, n) << endl;
//	cout << "Sum= " << Sale::sum << endl;
//}
//int main()
//{
//	Sale s[3] = {
//		Sale(101, 5, 23.5),
//		Sale(102, 12, 24.56),
//		Sale(103, 100, 21.5)
//	};
//	Sale::display(s, 3);
//	system("pause");
//}
#include <iostream>
using namespace std;
class Student
{ 
public:
	void display()
	{
		cout << num << endl << score << endl;
	}
	void setdata()
	{
		cin >> num >> score;
	}
private:
	int num=0;
	int score = 0;

};
int main()
{
	Student st1;
	st1.setdata();
	st1.display();
	system("pause");
	return 0;
}