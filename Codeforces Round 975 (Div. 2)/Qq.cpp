#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v)
     	cin >> x;

    vector<int> ans;

     for (int i = 1; i < n - 1; i++) {
     	vector<int> tmp;
     	for (int j = 0; j < n; j++) {
     		if (j != i)
     			tmp.push_back(v[j]);
     	}

        int mx = -1e9;
     	for (int k = 0; k < tmp.size() - 1; k++) {
     		mx = max(tmp[k + 1] - tmp[k], mx);
     	}
     	ans.push_back(mx);
     }
     
     cout << *min_element(ans.begin(), ans.end()) << '\n';
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
