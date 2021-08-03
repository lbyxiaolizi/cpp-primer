#include<iostream>
int main()
{
    using namespace std;
    string s,result;
    cin >> s;
    for(auto &x:s){
        if(!ispunct(x)){
            result += x;
        }
    }
    cout << result << endl;
    system("pause");
    return 0;
}