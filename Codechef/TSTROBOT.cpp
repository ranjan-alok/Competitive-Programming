#include <bits/stdc++.h>

using namespace std;

#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        char s[n];

        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        vector <int> v;
        vector <int>::iterator ip;
        int cnt = 1;
        v.push_back(x);

        for (int i = 0; i < n; i++) {

            if (s[i] == 'R') {
                x += 1;
                v.push_back(x);
                cnt++;
            }

            if (s[i] == 'L') {
                x -= 1;
                v.push_back(x);
                cnt++;
            }
        }

        sort(v.begin(), v.end());
        v.erase( unique( v.begin(), v.end() ), v.end() );

        int flag = 0;
        for (ip = v.begin(); ip != v.end(); ++ip) {
            flag++;
        }
        
        cout << flag <<"\n";
    }
	return 0;
}
