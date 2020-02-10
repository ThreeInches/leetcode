#include <iostream>
#include <string>
using namespace std;

int main4()
{
	string s;
	while (getline(cin, s))
	{
		size_t pos = s.rfind(' ');
		cout << s.size() - pos - 1 << endl;
	}
	system("pause");
	return 0;
}