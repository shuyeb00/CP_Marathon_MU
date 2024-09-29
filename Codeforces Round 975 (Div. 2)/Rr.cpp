#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n;
    cin >> n;

    map<string, int> mp;
    for (int i = 0; i < n; i++) {
    	string s;
    	cin >> s;
    	mp[s]++;
    }

    int q;
    cin >> q;

    while (q--) {
    	string s;
    	cin >> s;
    	cout << mp[s] << '\n';
    }

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
