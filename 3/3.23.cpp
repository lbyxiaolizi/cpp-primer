#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    vector<int> num;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        num.push_back(rand() % 1000);
    }
    for (auto it = num.cbegin(); it != num.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = num.begin(); it != num.end(); it++)
    {
        *it *= 2;
        cout << *it << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}