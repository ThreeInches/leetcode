#include <iostream>
using namespace std;

int main3()
{
	int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
	cout << arr[1][2] << endl;
	cout << *(arr[1]+2) << endl;
	cout << *(*arr + 1) + 2 << endl;
	cout << (*(arr + 1))[2] << endl;

	system("pause");
	return 0;
}
