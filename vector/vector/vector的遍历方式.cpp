#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main7()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	v[0] = 10;
	cout << v[0] << endl;

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;

	vector<int> swapv;
	swapv.swap(v);

	cout << "v data:" << endl;
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;

	cout << "swapv data:" << endl;
	for (size_t i = 0; i < swapv.size(); i++)
	{
		cout << swapv[i] << ' ';
	}
	cout << endl;

	for (auto x : v)
	{
		cout << x << ' ';
	}
	system("pause");
	return 0;
}
