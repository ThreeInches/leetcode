#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	vector<vector<int>> generate(int numRows)
	{
		vector<vector<int>> res(numRows);
		if (numRows == 0)
		{
			return res;
		}
		res[0].push_back(1);
		for (int i = 1; i < numRows; i++)
		{
			res[i].push_back(1);
			for (int j = 1; j < i; j++)
			{
				res[i].push_back(res[i - 1][j - 1] + res[i - 1][j]);
			}
			res[i].push_back(1);
		}
		return res;
	}
	void show(vector<vector<int>>& res)
	{
		for (int i = 0; i < res.size(); i++)
		{
			for (int j = 0; j < res[i].size(); j++)

			{
				cout << res[i][j] << ' ';
			}
			cout << endl;
		}
	}
};

int main2()
{
	Solution a;
	a.show(a.generate(5));
	system("pause");
	return 0;
}
