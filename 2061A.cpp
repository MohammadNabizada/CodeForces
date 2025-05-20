
#include <iostream>
using namespace std;

int main()
{
    long t; cin >> t;

    while (t--)
    {
        long n; cin >> n;
        long odds(0), evens(0);

        for (long i = 0; i < n; i++)
        {
            long x; cin >> x;
            x %= 2;
            odds += x;
            evens += (1 - x);
        }

        cout << odds + (evens ? 1 : -1)<<endl;


    }
    


    return 0;
}
