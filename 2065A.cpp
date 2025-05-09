#include <iostream>
#include <string>
using namespace std;


int main()
{

	int t; cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		if (str.length() == 2)
			cout << "i" << "\n";
		else {
			for (int i = 0; i < str.length() - 2; i++)
				cout << str[i];
			cout << "i" << "\n";
		}
	}



	return 0;
}