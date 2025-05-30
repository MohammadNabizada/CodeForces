#include <iostream>
using namespace std;

int main()
{
    long t; cin >> t;
    while (t--)
    {
        long n, m; cin >> n >> m;
        long x, y; cin >> x >> y;
        long total(4 * m);
        while (--n)
        {
            cin >> x >> y;
            total += 2 * (x + y);
        }
        cout << total << endl;
    }



}