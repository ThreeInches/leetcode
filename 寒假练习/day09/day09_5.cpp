#include <iostream>
using namespace std;

class Solution
{
public:
	string addBinary(string a, string b)
	{
		if (a.size() > b.size())
		{
			swap(a, b);
		}
		int gap = b.size() - a.size();
		for (int i = 0; i < gap; i++)
		{
			a.insert(0, "0");
		}
		for (int i = a.size() - 1; i > 0; i--)
		{
			a[i] = a[i] - '0' + b[i];
			if (a[i] >= '2')
			{
				a[i] = (a[i] - '0') % 2 + '0';
				a[i - 1] = a[i - 1] + 1;
			}
		}
		a[0] = a[0] - '0' + b[0];
		if (a[0] >= '2')
		{
			a[0] = (a[0] - '0') % 2 + '0';
			a = '1' + a;
		}
		return a;
	}
	void show(string a)
	{
		for (int i = 0; i < a.size(); i++)
		{
			cout << a[i] << ' ';
		}
	}
};

int main5()
{
	Solution a;
	a.show(a.addBinary("11", "1"));
	cout << endl;
	a.show(a.addBinary("1010", "1011"));
	system("pause");
	return 0;
}
