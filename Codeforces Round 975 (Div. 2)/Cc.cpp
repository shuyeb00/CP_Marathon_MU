#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    string s;
    cin >> s;

    bool ok = true;

    for (auto u : s)
    	if (u == '7' or u == '4')
    		ok = false;

    if (ok) {
    	cout << -1 << '\n';
    	return;
    }

    int cnt1 = 0, cnt2 = 0;
    for (auto u : s) {
    	if (u == '4')
    		cnt1++;
    	if (u == '7')
    		cnt2++;
    }

    cout << (cnt1 >= cnt2 ? 4 : 7) << '\n';
}

int32_t main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    //cin >> tc;

    while(tc--) {
    	solve();
    }

    return 0;

}
