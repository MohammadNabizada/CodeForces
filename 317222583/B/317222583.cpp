#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void solve()
{
	int n, x;
	cin >> n >> x;
	vector<int> a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int res = 0;
	int count = 0;

	for (int i = n - 1; i >= 0; i--)
	{
		count++;
		if (a[i] * count >= x)
		{
			res++;
			count = 0;
		}
		cout << res << endl;
	}
}

int main()
{

	int t;
	cin >> t;
	while (t--)
		solve();


	return 0;
}


