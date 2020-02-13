#include <iostream>
#include <vector>
using namespace std;

int main1()
{
	vector<int> first;
	vector<int> second(4, 100);
	vector<int> third(second.begin(), second.end());
	vector<int> fourth(third);

	int myints[] = { 16, 2, 77, 29 };
	vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

	cout << "The contents of first are:";
	for (vector<int>::iterator it = first.begin(); it != first.end(); it++)
	{
		cout << ' ' << *it;
	}
	cout << endl;

	cout << "The contents of second are:";
	for (vector<int>::iterator it = second.begin(); it != second.end(); it++)
	{
		cout << ' ' << *it;
	}
	cout << endl;

	cout << "The contents of third are:";
	for (vector<int>::iterator it = third.begin(); it != third.end(); it++)
	{
		cout << ' ' << *it;
	}
	cout << endl;
	
	cout << "The contents of fourth are:";
	for (vector<int>::iterator it = fourth.begin(); it != fourth.end(); it++)
	{
		cout << ' ' << *it;
	}
	cout << endl;

	cout << "The contents of fifth are:";
	for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
	{
		cout << ' ' << *it;
	}
	cout << endl;
	system("pause");
	return 0;
}