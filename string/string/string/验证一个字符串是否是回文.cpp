//#include <iostream>
//using namespace std;
//
//class Solution
//{
//public:
//	bool isPalindrome(string s)
//	{
//		string str;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if ((s[i] >= 'a'&&s[i] <= 'z'))
//			{
//				s[i] -= 32;
//			}
//			if ((s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= 'A'&&s[i] <= 'Z'))
//			{
//				str += s[i];
//			}
//		}
//		int left = 0;
//		int right = str.size() - 1;
//		while (left <= right)
//		{
//			if (str[left] != str[right])
//			{
//				return  false;
//			}
//			left++;
//			right--;
//		}
//		return true;
//	}
//};
//
//int main3()
//{
//	string s1("A man, a plan, a canal: Panama");
//	string s2("race a car");
//	string s3("0P");
//	Solution a;
//	cout << a.isPalindrome(s1) << endl;
//	cout << a.isPalindrome(s2) << endl;
//	cout << a.isPalindrome(s3) << endl;
//	system("pause");
//	return 0;
//}
