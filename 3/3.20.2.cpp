#include<iostream>
#include<vector>
int main()
{
    using namespace std;
    vector<int> i;
    int n;
    while (cin>>n)
    {
        i.push_back(n);
    }
    for (decltype(i.size()) n2 = 0, j = i.size(); n2 <= j; ++n2,--j)
    {
        cout << i[n2] + i[j] << " ";
    }
    //system("pause");
    return 0;
}