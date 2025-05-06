#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<int> b(n-2);

        for(auto x : b) cin >> x;

        int ok = 1;

        for(int i = 0;i < n - 2;)
        {
            if(b[i] == 1)
            {
                i++;
                int cnt = 0;
                while(i < n - 2 && b[i] != 1)
                {
                    cnt++;
                    i++;

                }

                if(cnt && cnt < 2 && i < n -2 && b[i] == 1)
                {
                    ok = 0;
                }
            }else{
                i++;
            }

        }

        cout << (ok ? "YES" : "NO") << '\n';
    }




    return 0;
}