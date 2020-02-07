#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
	bool isPalindrome(string s)
	{
		string str = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'a'&&s[i] <= 'z')
			{
				s[i] -= 32;
			}
			if ((s[i] >= 'A'&&s[i] <= 'Z') || (s[i] >= '0'&&s[i] <= '9'))
			{
				str += s[i];
			}
		}
		int left = 0;
		int right = str.size() - 1;
		while (left <= right)
		{
			if (str[left] != str[right])
			{
				return false;
			}
			left++;
			right--;
		}
		return true;
	}
};

int main4()
{
	Solution a;
	cout << a.isPalindrome("A man, a plan, a canal: Panama") << endl;
	cout << a.isPalindrome("race a car") << endl;
	system("pause");
	return 0;
}
