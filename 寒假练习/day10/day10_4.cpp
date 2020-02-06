#include <iostream>
using namespace std;

class Solution
{
public:
	int myAtoi(string str)
	{
		int res = 0;
		int flag = 1;
		int i = 0;
		while (i < str.size() && str[i] == ' ')
		{
			i++;
		}
		if (i < str.size() && str[i] == '-')
		{
			flag = -1;
		}
		if (i < str.size() && (str[i] == '-' || str[i] == '+'))
		{
			i++;
		}
		while (i < str.size() && isdigit(str[i]))
		{
			int pop = str[i] - '0';
			if (res > INT_MAX / 10 || (res == INT_MAX / 10 && pop > 7))
			{
				return flag > 0 ? INT_MAX : INT_MIN;
			}
			res = res * 10 + pop;
			i++;
		}
		return flag * res;
	}
};

int main4()
{
	Solution a;
	cout << a.myAtoi("42") << endl;
	cout << a.myAtoi("   -42") << endl;
	cout << a.myAtoi("4193 with words") << endl;
	cout << a.myAtoi("words and 987") << endl;
	cout << a.myAtoi("-91283472332") << endl;
	system("pause");
	return 0;
}
