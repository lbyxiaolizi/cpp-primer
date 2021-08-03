//编写一段程序从标准输入中一次读入一整行
#include<iostream>
int main()
{
    using namespace std;
    string l1;
    while(getline(cin, l1)){
    cout << l1 << endl;
    }
    return 0;
}