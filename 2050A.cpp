#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
	long t; cin >> t;
	while (t--)
	{

		int n, m; cin >> n >> m;
		vector<string> words(n);
		int res = 0;
		int j = 1;
		for (int i = 0; i < n; i++) {
			cin >> words[i];
			if (m - words[i].size() > 0)
			{
				
				m -= words[i].size();
				res++;
			}

		}
		cout << res << endl;


	}




	return 0;
}