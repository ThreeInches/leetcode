#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	int removeElement(vector<int>& nums, int val)
	{
		int count = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] != val)
			{
				nums[count] = nums[i];
				count++;
			}
		}
		return count;
	}
};

int main4()
{
	vector<int> nums;
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(0);
	nums.push_back(4);
	nums.push_back(2);
	Solution a;
	cout << a.removeElement(nums, 2) << endl;

	system("pause");
	return 0;
}
