#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    vector<int> num;
    int it;
    while (cin >> it)
    {
        num.push_back(it);
    }
    if (num.begin() == num.end())
    {
        cout << "noun" << endl;
        return -1;
    }
    for (auto it2 = num.begin(); it2 != num.end(); it2++)
    {
        cout << (*it2 + *(++it2)) << " ";
        if (it2 - num.begin() + 1 % 10 == 0)
        {
            cout << endl;
        }
    }
    if (num.size() % 2 != 0)
    {
        cout << *(num.end() - 1);
    }
    system("pause");
    return 0;
}
