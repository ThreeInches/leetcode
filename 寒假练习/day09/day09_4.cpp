#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> tmp;
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if ((target - nums[i]) == nums[j])
				{
					tmp.push_back(i);
					tmp.push_back(j);
				}
			}
		}
		return tmp;
	}
	void show(vector<int> nums)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			cout << nums[i] << ' ';
		}
	}
};

int main4()
{
	Solution a;
	vector<int> nums;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	a.show(a.twoSum(nums,9));
	system("pause");
	return 0;
}
