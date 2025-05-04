#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int l, r, d, u;
		cin >> l >> r >> d >> u;

		cout << ((u == l && d == u && r == u && r == l) ? "yes" : "No") << "\n";


	}
	return 0;
}