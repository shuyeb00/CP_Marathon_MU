#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int v, t;
    while (cin >> v and cin >> t) {
    	cout << (v * t) * 2 << '\n';
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
