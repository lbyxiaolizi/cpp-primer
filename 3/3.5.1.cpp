// 编写一段程序从标准输入中读入多个字符串并将它们连接在一起，输出连接成的大字符串。
#include<iostream>
int main()
{
    using namespace std;
    string result, s;
    while (s!="cc")
	{
        cin >> s;
        result += s;
	}
	cout << result << endl;
    system("pause");
    return 0;
}