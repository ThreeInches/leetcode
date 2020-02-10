#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
	string addStrings(string num1, string num2)
	{
		if (num1.size() > num2.size())
		{
			swap(num1, num2);
		}
		int gap = num2.size() - num1.size();
		for (int i = 0; i < gap; i++)
		{
			num1.insert(0, "0");
		}
		for (int i = num1.size() - 1; i>0; i--)
		{
			num1[i] = num1[i] - '0' + num2[i];
			if (num1[i] >= '10')
			{
				num1[i] = (num1[i] - '0') % 10 + '0';
				num1[i - 1] = num1[i - 1] + 1;
			}
		}
		num1[0] = num1[0] - '0' + num2[0];
		if (num1[0] >= '10')
		{
			num1[0] = (num1[0] - '0') % 10 + '0';
			num1 = '1' + num1;
		}
		return num1;
	}
};

int main()
{
	Solution a;
	cout << a.addStrings("9", "1") << endl;
	system("pause");
	return 0;
}
