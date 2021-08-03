#include<iostream>
#include<vector>
int main()
{
    using namespace std;
    vector<string> n;
    for (string i; i != "cc";cin>>i){
        n.push_back(i);
    }
    
    cout << n.size() << endl; //验证程序是否正确工作。
    system("pause");
    return 0;
}