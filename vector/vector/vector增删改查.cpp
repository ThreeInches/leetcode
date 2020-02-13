#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main5()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << ' ';
		it++;
	}
	cout << endl;

	v.pop_back();
	v.pop_back();

	it = v.begin();
	while (it != v.end())
	{
		cout << *it << ' ';
		it++;
	}
	cout << endl;
	system("pause");
	return 0;
}