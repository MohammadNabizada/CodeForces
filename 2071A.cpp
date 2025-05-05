#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int ans;
		cin >> ans;

		if (ans % 3 == 1)
			cout << "yes" << "\n";
		else {
			cout << "NO" << "\n";
		}
	}



	return 0;
}