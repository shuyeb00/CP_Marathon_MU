#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> mp;

    for (auto &x : v) {
    	cin >> x;
    	mp[x]++;
    }

    int rem = 0, cnt = 0;
    for (auto [x, y] : mp) {
    	cnt += (y + rem) / x;
    	rem = ((y + rem) % x);
    }

    cout << cnt << '\n';

}

int32_t main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;

    while(tc--) {
    	solve();
    }

    return 0;

}
