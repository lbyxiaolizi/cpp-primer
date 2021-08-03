#include<iostream>
int main()
{
    using std::cin;
    using std::cout;
    int v1 = 0, v2 = 0;
    cout << "请输入两个数：";
    cin >> v1 >> v2;
    if (v1>v2)
    {
        for (int i = v2; i <=v1; ++i)
        {
            cout << i<<std::endl;
        }
        
    }else{
        for (int i = v1; i <=v2; ++i)
        {
            cout << i<<std::endl;
        }
    }
    system("pause");
    return 0;
}