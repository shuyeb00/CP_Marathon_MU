#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n;
    while (cin >> n) {
    	vector<int> v(n);
    	for (auto &x : v)
    		cin >> x;

    	if (is_sorted(v.begin(), v.end())) {
    		cout << "Minimum exchange operations : ";
    		cout << 0 << '\n';
    		continue;
    	}

    	int cnt = 0;
    	while (1) {
    		for (int i = 0; i < n - 1; i++) {
    			if (v[i] > v[i + 1])
    				swap(v[i], v[i + 1]);
    		}
    		cnt++;
    		if (is_sorted(v.begin(), v.end()))
    			break;
    	}

    	cout << "Minimum exchange operations : ";
    	cout << cnt << '\n';
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
