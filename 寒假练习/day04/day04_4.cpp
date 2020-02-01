#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s)
	{
		int count = 0;
		int flag = 0;
		for (int i = s.length() - 1; i >= 0; i--)
		{
			if (s[i] != ' ')
			{
				flag = true;
				count++;
			}
			else if (s[i] == ' '  && flag)
			{
				return count;
			}
		}
		return count;
	}
};

int main4()
{
	Solution a;
	cout << a.lengthOfLastWord("Hello World") << endl;
	system("pause");
	return 0;
}
