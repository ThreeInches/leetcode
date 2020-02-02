#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
	string reverseOnlyLetters(string S)
	{
		string str;
		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] >= 'A' && S[i] <= 'Z' || S[i] >= 'a' && S[i] <= 'z')
			{
				str.push_back(S[i]);
			}
		}
		reverse(str.begin(), str.end());
		for (int i = 0, k = 0; i < S.size(); i++)
		{
			if (S[i] >= 'A' && S[i] <= 'Z' || S[i] >= 'a' && S[i] <= 'z')
			{
				S[i] = str[k++];
			}
		}
		return S;
	}
	void show(string S)
	{
		for (int i = 0; i < S.size(); i++)
		{
			cout << S[i];
		}
	}
};

int main5()
{
	Solution a;
	string S1 = "ab-cd";
	string S2 = "a-bC-dEf-ghIj";
	a.show(a.reverseOnlyLetters(S1));
	cout << endl;
	a.show(a.reverseOnlyLetters(S2));

	system("pause");
	return 0;
}
