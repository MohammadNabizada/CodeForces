#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long x, y;
        cin >> x >> y;
        cout << (((y == x + 1) || ((x > y) && !((x - y + 1) % 9))) ? "Yes" : "No") << endl;
    }
    return 0;
}