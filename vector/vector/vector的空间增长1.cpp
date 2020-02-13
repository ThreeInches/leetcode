#include <iostream>
#include <vector>
using namespace std;

int main3()
{
	size_t sz;
	vector<int> foo;
	sz = foo.capacity();
	cout << "making foo grow:\n";
	for (int i = 0; i < 100; i++)
	{
		foo.push_back(i);
		if (sz != foo.capacity())
		{
			sz = foo.capacity();
			cout << "capcity changed: " << sz << endl;
		}
	}
	system("pause");
	return 0;
}
