#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, p, k;
		cin >> n >> k >> p;

		if ((k < -n * p) || (k > n * p)) {
			cout << "-1" << "\n";
		}
		else {
			int ans = abs(k);

			cout << ans / p + (k % p ? 1 : 0) << "\n";
		}
	}


	return 0;
}