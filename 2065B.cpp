#include <iostream>
#include <string>
using namespace std;


int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		bool same = false;
		for (int i = 0; !same && i < s.length() - 1; i++)
			same = (s[i] == s[i + 1]);

		cout << (same ? 1 : s.length()) << "\n";
	}


	return 0;
}