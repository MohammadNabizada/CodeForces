#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int f = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            int x = a[i], y = a[i + 1];
            if (x > y) swap(x, y);
            if (x + x > y && x + y > x)
            {
                f = 1;
                break;
            }
        }
        cout << (f ? "YES" : "NO") << endl;


        
    }
    return 0;
}
