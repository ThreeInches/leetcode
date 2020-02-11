//#include <iostream>
//#include <string>
//using namespace std;
//
//class solution
//{
//public:
//	bool ispalindrome(string s)
//	{
//		string str;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if ((s[i] >= 'a'&&s[i] <= 'z'))
//			{
//				s[i] -= 32;
//			}
//			if ((s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= 'a'&&s[i] <= 'z'))
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
//	string s1("a man, a plan, a canal: panama");
//	string s2("race a car");
//	string s3("0p");
//	solution a;
//	cout << a.ispalindrome(s1) << endl;
//	cout << a.ispalindrome(s2) << endl;
//	cout << a.ispalindrome(s3) << endl;
//	system("pause");
//	return 0;
//}
