#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;


        vector <int> v;
        vector <int> ::iterator it;
        int cnt = 0;
        for (int i = 0; i < s.length(); i++) {
            v.push_back((int)s[i]);
            cnt++;
        }

        sort(v.begin(), v.end());

        int flag = 0;
        for (int i = 0; i < cnt-1; i++) {
            if (((int)v[i+1] - (int)v[i]) == 1) {
                flag = 1;
            }
            else {
                flag = 0;
                break;
            }
        }

        if (v.size() == 1) {
            flag = 1;
        }

        if (flag == 1) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }

    }
	return 0;
}
