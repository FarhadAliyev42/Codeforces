#include <iostream>

using namespace std;

/**
 * Problem: Find the Zero (Interactive)
 * Gemini Generated Solution 
 */

int ask(int i, int j) {
    cout << "? " << i << " " << j << endl;
    int res;
    cin >> res;
    if (res == -1) exit(0); // Protocol for invalid query or limit exceeded
    return res;
}

void solve() {
    int n;
    if (!(cin >> n)) return;

    // Phase 1: Use n queries to compare index 1 with n other indices.
    // If any returns 1, we found a pair of zeros.
    bool found = false;
    for (int i = 2; i <= n + 1; ++i) {
        if (ask(1, i) == 1) {
            cout << "! " << 1 << endl;
            return;
        }
    }

    // Phase 2: If we reach here, we've used n queries and all were 0.
    // We have 1 query remaining (limit is n+1).
    // If a[1] was 0, then a[2...n+1] are all non-zero, meaning a[n+2] is 0.
    // If a[1] was non-zero, we use the last query to distinguish.
    if (ask(2, n + 2) == 1) {
        cout << "! " << 2 << endl;
    } else {
        cout << "! " << n + 2 << endl;
    }
}

int main() {
    // Standard setup for interactive problems
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}