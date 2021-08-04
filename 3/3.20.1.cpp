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
    for (decltype(i.size()) n2 = 0; n2 < i.size() - 1;++n2){
        cout << i[n2] + i[n2 + 1] << " ";
    }
    system("pause");
    return 0;
}