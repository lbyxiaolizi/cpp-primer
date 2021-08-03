#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    vector<string> n;
    string i, i2;
    while (cin >> i)
    {
        n.push_back(i);
        cout << "Do you want to continue(y/n)";
        cin >> i2;
        if (i2 != "y" && i2 != "Y")
        {
            break;
        }
    }
        for (auto &mem : n)
        {
            for (auto &c : mem)
            {
                c = toupper(c);
            }
            cout << mem << endl;
        }
system("pause");
return 0;
}