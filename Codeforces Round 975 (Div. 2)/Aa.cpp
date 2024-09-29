#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int m = 1e9 + 7;

void solve() {
     
    int n;
    cin >> n;

    ll a = 0;
    ll b = n % m, c = 1 % m;

    for (int i = 1; i <= n; i++)
    	a = (a % m + i % m) % m;

    for (int i = 1; i < n; i++)
    	b = (b % m * n % m) % m;

    for (int i = 1; i <= n; i++)
    	c = (c % m * 1ll * i % m) % m;

    ll x = 2 % m, y = 3 % m;
    for (int i = 1; i < n; i++)
    	x = (x % m * 2 * 1ll) % m;

    for (int i = 1; i < n; i++)
    	y = (y % m * 3 * 1ll) % m;

    ll d = ((x % m) + (y % m)) % m;

    cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
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
