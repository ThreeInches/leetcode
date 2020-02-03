#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	int pivotIndex(vector<int>& nums)
	{
		int sumleft = 0;
		int sumall = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			sumall += nums[i];
		}
		for (int j = 0; j < nums.size(); j++)
		{
			if (sumleft * 2 == sumall - nums[j])
			{
				return j;
			}
			sumleft += nums[j];
		}
		return -1;
	}
};

int main5()
{
	Solution a;
	vector<int> nums1;
	nums1.push_back(1);
	nums1.push_back(7);
	nums1.push_back(3);
	nums1.push_back(6);
	nums1.push_back(5);
	nums1.push_back(6);
	cout << a.pivotIndex(nums1) << endl;
	vector<int> nums2;
	nums2.push_back(1);
	nums2.push_back(2);
	nums2.push_back(3);
	cout << a.pivotIndex(nums2) << endl;
	system("pause");
	return 0;
}
