#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string toLowerCase(string str)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] - 'A' + 'a';
			}
		}
		return str;
	}
};

int main4() {
	string str = "Hello,World!";
	Solution a;
	cout << a.toLowerCase(str) << endl;
	system("pause");
	return 0;
}
