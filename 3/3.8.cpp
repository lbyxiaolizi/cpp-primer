#include<iostream>
int main()
{
    using namespace std;
    string s;
    cin >> s;
    decltype(s.size()) i = 0;
    while (i != s.size())
	{
		s[i] = 'X';
		++i;
	}
	cout << s << endl;

    /*
    for (i = 0; i != s.size(); ++i)
	{
		s[i] = 'Y';
	}
	cout << s << endl;

    */
    system("pause");
    return 0;
}