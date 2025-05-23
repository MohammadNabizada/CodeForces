#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long a, b, d, e;
        cin >> a >> b >> d >> e;
        int max_f = 1;
        if (d == a + 2 * b || e == a + b + d || 2 * d == b + e) {
            max_f = 2;
        }
        if (d == a + 2 * b && e == a + b + d) {
            max_f = 3;
        }
        cout << max_f << endl;
    }
    return 0;
}