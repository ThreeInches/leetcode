#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
	{
		int i, j;
		for (i = m, j = 0; i < m + n, j < n; i++, j++)
		{
			nums1[i] = nums2[j];
		}
		sort(nums1.begin(), nums1.end());
	}
	void show(vector<int>& nums1)
	{
		for (int i = 0; i < nums1.size(); i++)
		{
			cout << nums1[i] << endl;
		}

	}
};

int main5()
{
	vector<int> nums1;
	vector<int> nums2;
	nums1.push_back(1);
	nums1.push_back(2);
	nums1.push_back(3);
	nums2.push_back(2);
	nums2.push_back(5);
	nums2.push_back(6);
	Solution a;
	a.merge(nums1, 3, nums2, 3);

	system("pause");
	return 0;
}
