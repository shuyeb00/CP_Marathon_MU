#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n;
    cin >> n;

    string s = to_string(n);
    bool ok = true;

    for (auto u : s)
    	if (u != '4' and u != '7')
    		ok = false;

    if (ok) {
    	cout << "YES" << '\n';
    	return;
    }

    if (n % 4 == 0 or n % 7 == 0 or n % 47 == 0 or n % 74 == 0)
    	cout << "YES" << '\n';
    else
    	cout << "NO" << '\n';
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
