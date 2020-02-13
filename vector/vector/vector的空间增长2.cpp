#include <iostream>
#include <vector>
using namespace std;

int main4()
{
	vector<int> myvector;

	for (int i = 1; i < 10; i++)
	{
		myvector.push_back(i);
	}
	
	myvector.push_back(5);
	myvector.resize(8, 100);
	myvector.resize(12);

	cout << "myvector contains";
	for (int i = 0; i < myvector.size(); i++)
	{
		cout << ' ' << myvector[i];
	}
	cout << endl;
	system("pause");
	return 0;
}
