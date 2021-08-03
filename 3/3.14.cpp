#include<iostream>
#include<vector>
int main()
{
    using namespace std;
    vector<int> n;
    for (int i = 0; i != 9;cin>>i){
        n.push_back(i);
    }
    
    cout << n.size() << endl; //验证程序是否正确工作。
    system("pause");
    return 0;
}