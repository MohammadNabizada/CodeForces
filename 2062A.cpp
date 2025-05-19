#include <iostream>
#include <string>
using namespace std;
int main()
{
    long t; cin >> t;


    while (t--) {
        string s; cin >> s;
        long ones(0);
        for (char x : s)
        {
            ones += (x == '1');
        }

        cout << ones << endl;
    }
}