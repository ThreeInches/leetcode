#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
#if 0
	void rotate(vector<int>& nums, int k)
	{
		reverse(nums.begin(), nums.end() - k % nums.size());
		reverse(nums.end() - k % nums.size(), nums.end());
		reverse(nums.begin(), nums.end());
	}
#else
	void rotate(vector<int>& nums, int k)
	{
		vector<int> tmp(nums);
		for (int i = 0; i < nums.size(); i++)
		{
			nums[(i + k) % nums.size()] = tmp[i];
		}
	}
#endif
	void print(vector<int>& nums)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			cout << nums[i] << ' ';
		}
	}
};

int main5()
{
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	a.push_back(6);
	a.push_back(7);

	Solution b;
	b.rotate(a, 3);
	b.print(a);
	system("pause");
	return 0;
}
