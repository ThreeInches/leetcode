#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> l1;
	list<int> l2(4, 100);
	list<int> l3(l2.begin(), l2.end());
	list<int> l4(l3);

	//以数组为迭代器区间构造l5
	int arr[] = { 16, 2, 77, 29 };
	list<int> l5(arr, arr + sizeof(arr) / sizeof(int));

	//用迭代器的方法打印l5中的元素
	for (list<int>::iterator it = l5.begin(); it != l5.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	//范围for遍历
	for (auto& i : l5)
	{
		cout << i << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}
