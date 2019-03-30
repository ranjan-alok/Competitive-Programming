#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char s[n];
        cin >> s;

        int cnt = 0;


            if (s[0] == '0' && s[1] == '0') {
                s[0] = '1';
                cnt++;
            }

            for (int i = 1; i < n-1; i++) {
            if (s[i] == '0' && s[i-1] == '0' && s[i+1] == '0') {
                s[i] = '1';
                cnt++;
            }
            }

            if (s[n-1] == '0' && s[n-2] == '0') {
                cnt++;
            }

        cout << cnt <<"\n";
    }
    return 0;
}
