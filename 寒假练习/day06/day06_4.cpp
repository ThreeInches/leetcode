#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<int> sortedSquares(vector<int>& A)
	{
		vector<int> B;
		for (int i = 0; i < A.size(); i++)
		{
			B.push_back(A[i]*A[i]);
		}
		sort(B.begin(), B.end());
		return B;
	}
	void show(vector<int>& A)
	{
		for (int i = 0; i < A.size(); i++)
		{
			cout << A[i] << ' ';
		}
	}
};

int main4()
{
	Solution a;
	vector<int> A1;
	A1.push_back(-4);
	A1.push_back(-1);
	A1.push_back(0);
	A1.push_back(3);
	A1.push_back(10);
	a.show(a.sortedSquares(A1));

	vector<int> A2;
	A2.push_back(-7);
	A2.push_back(-3);
	A2.push_back(2);
	A2.push_back(3);
	A2.push_back(11);
	a.show(a.sortedSquares(A2));
	system("pause");
	return 0;
}
