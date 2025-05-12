#include <iostream>
#include <string>
using namespace std;

int main()
{

	long t; cin >> t;
	string s; cin >> s;
	while (t--)
	{
		long n; cin >> n;
		long cnt(2 * (s[0] == '1') - (s.back() == '1'));

		for(int i = 1;i<n;i++)
			cnt += 2 * (s[i - 1] == '0' && s[i] == '1');

		cout << cnt << endl;

	}




	return 0;
}