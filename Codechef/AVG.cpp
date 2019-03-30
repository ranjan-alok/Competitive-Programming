#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, v;
        cin >> n >> k >> v;
        int arr[n], sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        int x = (v * (n+k) - sum)/k;
        int rem = (v * (n+k) - sum) % k;

        if (x > 0 && rem == 0) {
            cout << x <<"\n";
        }

        else {
            cout << "-1" << "\n";
        }

    }
    return 0;
}
