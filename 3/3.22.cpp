#include<iostream>
#include<vector>
int main()
{
    using namespace std;
    vector<string> vtext;
    string s;
    while(getline(cin,s)){
        vtext.push_back(s);
    }
    for (auto it = vtext.begin();it!=vtext.end()&&!it->empty();it++){
        for (auto it2 = it->begin(); it2 != it->end();it2++){
            *it2 = toupper(*it2);
            cout << *it << endl;
        }
    }
    return 0;
}