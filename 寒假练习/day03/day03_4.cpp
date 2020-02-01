#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool canConstruct(string ransomNote, string magazine)
	{
		int arrran[26] = { 0 };
		int arrmag[26] = { 0 };
		for (int i = 0; i < magazine.length(); i++)
		{
			arrmag[magazine[i] - 'a']++;
		}
		for (int i = 0; i < ransomNote.length(); i++)
		{
			arrran[ransomNote[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++)
		{
			if (arrmag[i] < arrran[i])
			{
				return false;
			}
		}
		return true;
	}
};

int main4()
{
	Solution a;
	cout << a.canConstruct("a", "b") << endl;
	cout << a.canConstruct("aa", "ab") << endl;
	cout << a.canConstruct("aa", "aab") << endl;
	system("pause");
	return 0;
}
