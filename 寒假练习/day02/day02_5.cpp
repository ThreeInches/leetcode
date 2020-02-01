#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target)
	{
		if (nums[0] == target)
		{
			return 0;
		}
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] >= target)
			{
				return i;
			}
		}
		return nums.size();
	}
};

int main5()
{
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(5);
	nums.push_back(6);
	Solution a;
	cout << a.searchInsert(nums, 5) << endl;
	cout << a.searchInsert(nums, 2) << endl;
	cout << a.searchInsert(nums, 7) << endl;
	cout << a.searchInsert(nums, 0) << endl;
	system("pause");
	return 0;
}
