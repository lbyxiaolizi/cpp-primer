#include<iostream>
int main()
{
    int n1 = 0, n2 = 0, i = 0;
    std::cout << "请输入两个数：";
    std::cin >> n1 >> n2;
    if (n2>n1)
    {
        i = n1;
        while (i<=n2)
        {
            std::cout << i << std::endl;
            ++i;
        }
        
    }else{
        i = n2;
        while (i<=n1)
        {
            std::cout << i << std::endl;
            ++i;
        }
    }
    system("pause");
    return 0;
}