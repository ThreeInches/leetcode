#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
	int compress(vector<char>& chars)
	{
		int count = 0;
		for (int i = 0, j = 0; i < chars.size(); j = i)
		{
			while (i < chars.size() && chars[i] == chars[j])
			{
				i++;
			}
			chars[count++] = chars[j];
			if (i - j == 1)
			{
				continue;
			}
			string s = to_string(i - j);
			for (int i = 0; i < s.size(); i++)
			{
				chars[count++] = s[i];
			}
		}
		return count;
	}
};

int main5()
{
	Solution a;
	vector<char> chars1;
	chars1.push_back(char("a"));
	chars1.push_back(char("a"));
	chars1.push_back(char("b"));
	chars1.push_back(char("b"));
	chars1.push_back(char("c"));
	chars1.push_back(char("c"));
	chars1.push_back(char("c"));
	cout << a.compress(chars1) << endl;
	vector<char> chars2;
	chars2.push_back(char("a"));
	cout << a.compress(chars2) << endl;
	vector<char> chars3;
	chars3.push_back(char("a"));
	chars3.push_back(char("b"));
	chars3.push_back(char("b"));
	chars3.push_back(char("b"));
	chars3.push_back(char("b"));
	chars3.push_back(char("b"));
	chars3.push_back(char("b"));
	chars3.push_back(char("b"));
	chars3.push_back(char("b"));
	chars3.push_back(char("b"));
	chars3.push_back(char("b"));
	chars3.push_back(char("b"));
	chars3.push_back(char("b"));
	cout << a.compress(chars3) << endl;



	system("pause");
	return 0;
}
