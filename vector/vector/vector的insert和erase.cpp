#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main6()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	vector<int>::iterator pos = find(v.begin(), v.end(), 3);

	v.insert(pos, 30);

	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << ' ';
		it++;
	}
	cout << endl;

	pos = find(v.begin(), v.end(), 3);
	v.erase(pos);

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
