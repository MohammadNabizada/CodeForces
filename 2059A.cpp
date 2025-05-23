
#include <iostream>
#include <set>
using namespace std;

int main()
{
    long t; cin >> t;
    while (t--)
    {
        set<long> a, b;
        long n; cin >> n;
        for (long i = 0; i < n; i++)
        {
            long x; cin >> x;
            a.insert(x);
        }
        for (long j = 0; j < n; j++)
        {
            long x; cin >> x;
            b.insert(x);
        }

        if (a.size() * b.size() >= 3)
            cout << "YES" << endl;
        else {
            cout << "NO" << endl;
        }
    }



    return 0;
}