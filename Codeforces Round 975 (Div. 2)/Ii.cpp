#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n;
    cin >> n;

    cout << (360 % (180 - n) == 0 ? "YES" : "NO") << '\n';
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
