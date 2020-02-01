#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x)
	{
		string str1 = to_string(x);
		string str2 = str1;
		reverse(str2.begin(), str2.end());
		if (str2 == str1)
		{
			return true;
		}
		return false;
	}
};

int main5()
{
	Solution a;
	cout << a.isPalindrome(121) << endl;
	cout << a.isPalindrome(-121) << endl;
	cout << a.isPalindrome(10) << endl;
	system("pause");
	return 0;
}
