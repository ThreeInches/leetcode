#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	int singleNumber(vector<int>& nums)
	{
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (nums[i] != -1 && nums[i] == nums[i + 1])
			{
				nums[i] = -1;
				nums[i + 1] = -1;
			}
		}
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] != -1)
			{
				return nums[i];
			}
		}
		return -1;
	}
};

int main1()
{
	vector<int> nums1;
	vector<int> nums2;
	Solution a;
	nums1.push_back(2);
	nums1.push_back(2);
	nums1.push_back(1);
	nums2.push_back(1);
	nums2.push_back(1);
	nums2.push_back(2);
	nums2.push_back(2);
	nums2.push_back(3);
	nums2.push_back(3);
	nums2.push_back(4);

	cout << a.singleNumber(nums1) << endl;
	cout << a.singleNumber(nums2) << endl;
	system("pause");
	return 0;
}
