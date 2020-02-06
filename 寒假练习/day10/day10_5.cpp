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
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == target)
			{
				tmp.push_back(i);
				break;
			}
		}
		for (int i = 0; i < nums.size(); i++)
		{
			cout << tmp[i] << ' ';
		}
		return tmp;
	}
};

int main()
{
	Solution a;
	vector<int> nums1;
	nums1.push_back(5);
	nums1.push_back(7);
	nums1.push_back(7);
	nums1.push_back(8);
	nums1.push_back(8);
	nums1.push_back(10);
	a.searchRange(nums1, 8);
	system("pause");
	return 0;
}
