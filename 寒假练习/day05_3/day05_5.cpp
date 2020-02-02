#include <iostream>
using namespace std;

class Solution {
public:
	bool isLongPressedName(string name, string typed)
	{
		int len1 = name.size();
		int len2 = typed.size();
		if (len1 > len2)
		{
			return false;
		}
		int i = 0, j = 0;
		while (i < len1 && j < len2)
		{
			if (name[i] != typed[j])
			{
				return false;
			}
			while (i < len1 && name[i] == typed[j])
			{
				i++;
				j++;
			}
			while (j < len2 && typed[j] == typed[j - 1])
			{
				j++;
			}
			if (i < len1 && j >= len2)
			{
				return false;
			}
		}
		return true;
	}
};

int main5()
{
	Solution a;
	cout << a.isLongPressedName("alex", "aaleex") << endl;
	cout << a.isLongPressedName("saeed", "ssaaedd") << endl;
	cout << a.isLongPressedName("leelee", "lleeelee") << endl;
	cout << a.isLongPressedName("laiden", "laiden") << endl;
	system("pause");
	return 0;
}
