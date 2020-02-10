#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
	int firstUniqChar(string s)
	{
		int count[256] = { 0 };
		for (int i = 0; i < s.size(); i++)
		{
			count[s[i]] += 1;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (count[s[i]] == 1)
			{
				return i;
			}
		}
		return -1;
	}
};

int main3()
{
	string s1("leetcode");
	string s2("loveleetcode");
	Solution a;
	cout << a.firstUniqChar(s1) << endl;
	cout << a.firstUniqChar(s2) << endl;

	system("pause");
	return 0;
}
