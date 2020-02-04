#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	int thirdMax(vector<int>& nums)
	{
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (nums[i] == nums[i + 1])
			{
				nums.erase(nums.begin() + i + 1);
				i--;
			}
		}
		if (nums.size() >= 3)
		{
			return nums[nums.size() - 3];
		}
		return nums[nums.size() - 1];
	}
};

int main5()
{
	Solution a;
	vector<int> nums1;
	nums1.push_back(3);
	nums1.push_back(2);
	nums1.push_back(1);
	cout << a.thirdMax(nums1) << endl;
	vector<int> nums2;
	nums2.push_back(1);
	nums2.push_back(2);
	cout << a.thirdMax(nums2) << endl;
	vector<int> nums3;
	nums3.push_back(2);
	nums3.push_back(2);
	nums3.push_back(3);
	nums3.push_back(1);
	cout << a.thirdMax(nums3) << endl;
	system("pause");
	return 0;
}
