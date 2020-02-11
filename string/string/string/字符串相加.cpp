#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
	string addStrings(string num1, string num2)
	{
		string str;
		int flag = 0;
		if (num1.size() == 0)
		{
			return num2;
		}
		if (num2.size() == 0)
		{
			return num1;
		}
		reverse(num1.begin(), num1.end());
		reverse(num2.begin(), num2.end());
		if (num1.size() > num2.size())
		{
			swap(num1, num2);
		}
		int gap = num2.size() - num1.size();
		for (int i = 0; i < gap; i++)
		{
			num1.push_back('0');
		}
		for (int i = 0; i < num1.size(); i++)
		{
			int tmp = num1[i] - '0' + num2[i] - '0' + flag;
			if (tmp >= 10)
			{
				tmp %= 10;
				str.push_back(tmp + '0');
				flag = 1;
			}
			else
			{
				str.push_back(tmp + '0');
				flag = 0;
			}
		}
		if (flag == 1)
		{
			str.push_back('1');
		}
		reverse(str.begin(), str.end());
		return str;
	}
};

int main5()
{
	Solution a;
	cout << a.addStrings("9", "1") << endl;
	cout << a.addStrings("0", "0") << endl;
	system("pause");
	return 0;
}
