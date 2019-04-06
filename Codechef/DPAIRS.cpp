#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

bool comp(pair<int, int> vec1, pair<int, int> vec2) {
    return (vec1.first < vec2.first);
}

int32_t main()
{
	IOS;
    int n, m, input;
    cin >> n >> m;
    vector <pair<int, int>> vec1;
    vector <pair<int, int>> vec2;

    for (int i = 0; i < n; i++) {
        cin >> input;
        vec1.push_back({input, i});
    }

    for (int i = 0; i < m; i++) {
        cin >> input;
        vec2.push_back({input, i});
    }

    sort(vec1.begin(), vec1.end(), comp);
    sort(vec2.begin(), vec2.end(), comp);

    for (int i  = 0; i < m; i++) {
        cout << vec1[0].second << " " << vec2[i].second << endl;
    }

    for (int i = 1; i < n; i++) {
        cout << vec1[i].second << " " << vec2[m-1].second << endl;
    }

	return 0;
}
