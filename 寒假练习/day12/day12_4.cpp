#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	int findUnsortedSubarray(vector<int>& nums)
	{
		vector<int> tmp;
		tmp = nums;
		sort(tmp.begin(), tmp.end());
		int star = 0;
		int end = tmp.size() - 1;
		int len = star - end + 1;
		int min, max;
		while (star <= end)
		{
			min = star;
			max = end;
			for (int i = star; i <= end; i++)
			{
				if (nums[min] > nums[i]) min = i;
				if (nums[max] < nums[i]) max = i;
			}
			if (min == star&&max == end)
			{
				star += 1;
				end -= 1;
			}
			else if (min != star&&max == end)
			{
				end -= 1;
			}
			else if (min == star&&max != end)
			{
				star += 1;
			}
			else
			{
				break;
			}
		}
		return end - star > 0 ? end - star + 1 : 0;
	}
};

int main4()
{
	Solution a;
	vector<int> nums;
	nums.push_back(2);
	nums.push_back(6);
	nums.push_back(4);
	nums.push_back(8);
	nums.push_back(10);
	nums.push_back(9);
	nums.push_back(15);
	cout << a.findUnsortedSubarray(nums) << endl;

	system("pause");
	return 0;
}
