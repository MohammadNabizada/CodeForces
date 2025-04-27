#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    map<int, int> required = {
        {0, 3},
        {1, 1},
        {2, 2},
        {3, 1},
        {5, 1}
    };
    
    map<int, int> counts;
    for (int i = 0; i < n; ++i) {
        int digit = a[i];
        if (required.find(digit) != required.end()) {
            counts[digit]++;
        }
        
        bool all_met = true;
        for (auto& [d, cnt] : required) {
            if (counts[d] < cnt) {
                all_met = false;
                break;
            }
        }
        
        if (all_met) {
            cout << i + 1 << '\n';
            return;
        }
    }
    
    cout << 0 << '\n';
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}