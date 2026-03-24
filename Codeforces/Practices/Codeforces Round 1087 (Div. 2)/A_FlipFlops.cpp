#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t; 
    cin >> t; 

    while (t--) {
        long long n, c, k;
        cin >> n >> c >> k;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++) {
            if (arr[i] <= c) {
                long long diff = c - arr[i];
                long long spend = min(k, diff);
                
                k -= spend;
                c += (arr[i] + spend);
            }
        }
        cout << c << "\n";
    }
    return 0;
}