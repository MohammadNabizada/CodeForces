#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        cout << max(n, m) + 1 << '\n';
    }

    return 0;
}