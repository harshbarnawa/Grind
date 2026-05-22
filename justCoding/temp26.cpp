#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        bool decreasing = true;

        for (int i = 1; i < n; i++) {
            if (a[i-1] < a[i]) {
                decreasing = false;
                break;
            }
        }

        if (decreasing) cout << "NO\n";
        else cout << "YES\n";
    }
}