#include <iostream>
#include <string>
using namespace std;

void testString1()

{
	string s1;
	string s2("hello,world!");
	string s3(s2);
	string s4(10, 'a');
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;

}

void stringS1()
{
	string s1("Hello,World!");
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	cout << s1.capacity() << endl;
	cout << s1.empty() << endl;
	cout << s1 << endl;
	s1.clear();
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	cout << s1.capacity() << endl;
	cout << s1.empty() << endl;
	cout << s1 << endl;
	s1.resize(10, 'a');
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	cout << s1.capacity() << endl;
	cout << s1.empty() << endl;
	cout << s1 << endl;
	s1.resize(15);
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	cout << s1.capacity() << endl;
	cout << s1.empty() << endl;
	cout << s1 << endl;
	s1.resize(5);
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	cout << s1.capacity() << endl;
	cout << s1.empty() << endl;
	cout << s1 << endl;
}

void stringS2()
{
	string s2;
	s2.reserve(100);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;
	s2.reserve(50);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;
}

void testPushBack()
{
	string s3;
	size_t sz = s3.capacity();
	cout << "making s3 grow:\n";
	for (int i = 0; i < 100; i++)
	{
		s3.push_back('c');
		if (sz != s3.capacity())
		{
			sz = s3.capacity();
			cout << "capacity changed:" << sz << "\n";
		}
	}
}

void testPushBackReserve()
{
	string s4;
	s4.reserve(100);
	size_t sz = s4.capacity();
	cout << "making s4 grow:\n";
	for (int i = 0; i < 100; i++)
	{
		s4.push_back('c');
		if (sz != s4.capacity())
		{
			sz = s4.capacity();
			cout << "capacity changed:" << sz << '\n';
		}
	}
}

void testString2()
{
	string s5("hello,world!");
	const string s6("Hello,World!");
	cout << s5 << ' ' << s6 << endl;
	cout << s5[0] << ' ' << s6[0] << endl;
	s5[0] = 'H';
	cout << s5 << endl;
	//s6[0] = 'h';
}

void testString3()
{
	string s7("Hello,World!");
	for (size_t i = 0; i < s7.size(); i++)
	{
		cout << s7[i] << ' ' ;
	}
	cout << endl;
	string::iterator it = s7.begin();
	while (it != s7.end())
	{
		cout << *it << ' ';
		it++;
	}
	cout << endl;
	string::reverse_iterator rit = s7.rbegin();
	while (rit != s7.rend())
	{
		cout << *rit << ' ';
		rit++;
	}
	cout << endl;
	for (auto ch : s7)
	{
		cout << ch << ' ';
	}
	cout << endl;
}

void testString4()
{
	string str;
	str.push_back(' ');
	str.append("hello");
	str += 'w';
	str += "orld!";
	cout << str << endl;
	cout << str.c_str() << endl;

	//取出file1的后缀名
	string file1("string.cpp");
	size_t pos = file1.rfind('.');
	string suffix(file1.substr(pos, file1.size() - pos));
	cout << suffix << endl;

	//取出ur1中的域名
	string ur1("http://www.cplusplus.com/reference/string/string/find/");
	cout << ur1 << endl;
	size_t start = ur1.find("://");
	if (start == string::npos)
	{
		cout << "invalid ur1" << endl;
		return;
	}
	start += 3;
	size_t finish = ur1.find('/', start);
	string address = ur1.substr(start, finish - start);
	cout << address << endl;

	//删除ur1的协议前缀
	pos = ur1.find("://");
	ur1.erase(0, pos + 3);
	cout << ur1 << endl;
}

int main1()
{
	testString1();
	stringS1();
	stringS2();
	testPushBack();
	testPushBackReserve();
	testString2();
	testString3();
	testString4();
	system("pause");
	return 0;
}
