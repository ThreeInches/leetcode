#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#if 0
int main()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
	v.erase(pos);
	cout << *pos << endl;

	pos = find(v.begin(), v.end(), 3);
	v.insert(pos, 30);
	cout << *pos << endl;
	system("pause");
	return 0;
}
#else

int main()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	//vector<int>::iterator it = v.begin();
	//while (it != v.end())
	//{
	//	if (*it % 2 == 0)
	//	{
	//		v.erase(it);
	//	}
	//	it++;
	//}

	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		if ((*it % 2) == 0)
		{
			it = v.erase(it);
		}
		else
		{
			it++;
		}
	}
	system("pause");
	return 0;
}

#endif