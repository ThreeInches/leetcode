#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	vector<int> sortArrayByParity(vector<int>& A)
	{
		int left = 0;
		int right = A.size() - 1;
		while (left < right)
		{
			while (left < A.size() && A[left] % 2 == 0)
			{
				left++;
			}
			while (right < A.size() && A[right] % 2 == 1)
			{
				right--;
			}
			if (left>right)
			{
				break;
			}
			swap(A[left], A[right]);
		}
		return A;
		
	}
	void show(vector<int> A)
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
	vector<int> A;
	A.push_back(3);
	A.push_back(1);
	A.push_back(2);
	A.push_back(4);
	a.show(a.sortArrayByParity(A));
	system("pause");
	return 0;
}
