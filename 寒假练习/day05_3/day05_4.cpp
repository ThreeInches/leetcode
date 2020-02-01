#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums)
	{
		if (nums.empty())
		{
			return false;
		}
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (nums[i] == nums[i + 1])
			{
				return true;
			}
		}
		return false;
	}
};

int main4()
{
	Solution a;
	vector<int> nums1;
	nums1.push_back(1);
	nums1.push_back(2);
	nums1.push_back(3);
	nums1.push_back(1);
	cout << a.containsDuplicate(nums1) << endl;
	vector<int> nums2;
	nums2.push_back(1);
	nums2.push_back(2);
	nums2.push_back(3);
	nums2.push_back(4);
	cout << a.containsDuplicate(nums2) << endl;
	vector<int> nums3;
	nums3.push_back(1);
	nums3.push_back(1);
	nums3.push_back(1);
	nums3.push_back(3);
	nums3.push_back(3);
	nums3.push_back(4);
	nums3.push_back(3);
	nums3.push_back(2);
	nums3.push_back(4); 
	nums3.push_back(2);
	cout << a.containsDuplicate(nums3) << endl;

	system("pause");
	return 0;
}
