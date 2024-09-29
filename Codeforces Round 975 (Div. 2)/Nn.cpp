#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n, d;
    cin >> n >> d;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    	cin >> v[i];

    int x = d % n;
    for (int i = x + 1; i <= n; i++)
    	cout << v[i] << ' ';

    for (int i = 1; i <= x; i++)
    	cout << v[i] << ' ';

    cout << '\n';
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
