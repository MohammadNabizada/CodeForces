#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;

     
        long long low = 0, high = 2LL * (a + 1);
        long long ans = high;

        while (low <= high) {
            long long n = low + (high - low) / 2;
            long long b_days = (n + 1) / 2; 
            long long k_days = n / 2;     
            long long depth = b_days * x + k_days * y;

            if (depth >= a + 1) { 
                ans = n;
                high = n - 1;
            }
            else {
                low = n + 1;
            }
        }

        cout << (ans % 2 == 1 ? "NO" : "YES") << '\n';
    }

    return 0;
}