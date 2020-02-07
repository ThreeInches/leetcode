#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	vector<int> searchRange(vector<int>& nums, int target)
	{
		vector<int> tmp;
		int left = -1, right = -1;
		for (int i = 0; i < nums.size(); i++)
		{
			if (left == -1 && nums[i] == target)
			{
				left = i;
			}
			if (nums[i] == target)
			{
				right = i;
			}
		}
		tmp.push_back(left);
		tmp.push_back(right);
		return tmp;
	}
	void show(vector<int>& tmp)
	{
		for (int i = 0; i < tmp.size(); i++)
		{
			cout << tmp[i] << ' ';
		}
	}
};

int main5()
{
	Solution a;
	vector<int> nums1;
	nums1.push_back(5);
	nums1.push_back(7);
	nums1.push_back(7);
	nums1.push_back(8);
	nums1.push_back(8);
	nums1.push_back(10);
	a.show(a.searchRange(nums1, 8));
	vector<int> nums2;
	nums2.push_back(5);
	nums2.push_back(7);
	nums2.push_back(7);
	nums2.push_back(8);
	nums2.push_back(8);
	nums2.push_back(10);
	a.show(a.searchRange(nums2, 6));
	system("pause");
	return 0;
}
