// 编写一段程序读入两个字符串，比较其是否相等并输出结果。如果不相等，输出较大的那个字符串。改写上述程序，比较输入的两个字符串是否等长，如果不等长，输出长度较大的那个字符串。
#include<iostream>
int main()
{
    using namespace std;
    string n1, n2;
    cout << "请输入两组数字：";
    cin >> n1 >> n2;
    if (n1.size()==n2.size())
    {
        cout << "n1与n2等长" << n1 << endl;
    }else if(n1.size()>n2.size()){
        cout << n1 << endl;
    }else{
        cout << n2 << endl;
    }
    system("pause");
    return 0;
}