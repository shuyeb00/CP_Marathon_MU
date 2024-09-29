#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n;
    while (cin >> n) {
    	if (n == 0)
    		break;

    	vector<int> v(n);
    	for (auto &x : v)
    		cin >> x;

    	sort(v.begin(), v.end());
    	for (int i = 0; i < v.size(); i++) {
    		cout << v[i] << (i < v.size() - 1 ? ' ' : '\n');
    	}
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
