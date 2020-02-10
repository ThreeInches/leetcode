#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	void reverseString(vector<char>& s)
	{
		return reverse(s.begin(), s.end());
	}
	void show(vector<char>& s)
	{
		for (int i = 0; i < s.size(); i++)
		{
			cout << s[i] << ' ';
		}
	}
};

int main2() 
{
	Solution a;
	vector<char> s1;
	s1.push_back(char("h"));
	s1.push_back(char("e"));
	s1.push_back(char("l"));
	s1.push_back(char("l"));
	s1.push_back(char("o"));
	a.reverseString(s1);
	a.show(s1);

	vector<char> s2;
	s2.push_back(char("H"));
	s2.push_back(char("a"));
	s2.push_back(char("n"));
	s2.push_back(char("n"));
	s2.push_back(char("a"));
	s2.push_back(char("h"));
	a.reverseString(s2);
	a.show(s2);
	system("pause");
	return 0;
}
