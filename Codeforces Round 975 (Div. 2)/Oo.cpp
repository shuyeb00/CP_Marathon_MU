#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n;
    cin >> n;

    int cnt = 0;
    while (n--) {
    	int a, b;
    	cin >> a >> b;
    	cnt += (b - a >= 2);
    }

    cout << cnt << '\n';
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
