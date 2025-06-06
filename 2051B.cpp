#include <iostream>
using namespace std;
int main() {

  
    long t; cin >> t;

    while (t--) {
        long n, a, b, c; cin >> n >> a >> b >> c;
        long s(a + b + c);
        long t = 3 * (n / s); n %= s;
        if (0 < n && n <= a) 
        { 
            ++t; 
        }
        else if (a < n && n <= a + b) 
        { 
            t += 2; 
        }
        else if (n > a + b) 
        {
            t += 3; 
        }

        cout << t << endl;
    }

}