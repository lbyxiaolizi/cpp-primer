// 编写一段程序，使用范围for语句将字符串内的所有字符用X代替，如果将循环控制变量的类型设为char将发生什么？
#include<iostream>
int main()
{
    using namespace std;
    string s;
    cin >> s;
    for (char x : s)
	{
		x = 'X';
	}

	cout << s << endl;
    system("pause");
    return 0;
}