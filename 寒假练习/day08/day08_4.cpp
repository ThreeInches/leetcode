#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
#if 0
	vector<int> plusOne(vector<int>& digits)
	{
		long sum = 0;
		vector<int> A;
		for (int i = 0; i < digits.size(); i++)
		{
			sum = sum * 10 + digits[i];
		}
		sum += 1;
		for (;sum > 0; sum /= 10)
		{
			A.push_back(sum % 10);
		}
		reverse(A.begin(), A.end());
		return A;
	}
#else
	vector<int> plusOne(vector<int>& digits)
	{
		for (int i = digits.size() - 1; i >= 0; i--)
		{
			if (digits[i] == 9)
			{
				digits[i] = 0;
			}
			else
			{
				digits[i]++;
				return digits;
			}
		}
		digits.push_back(0);
		digits[0] = 1;
		return digits;
	}
#endif
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
	vector<int> digits1;
	digits1.push_back(1);
	digits1.push_back(2);
	digits1.push_back(3);
	a.show(a.plusOne(digits1));
	vector<int> digits2;
	digits2.push_back(4);
	digits2.push_back(3);
	digits2.push_back(2);
	digits2.push_back(1);
	a.show(a.plusOne(digits2));
	system("pause");
	return 0;
}
