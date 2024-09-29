#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    string s;
    cin >> s;

    if (s[0] == '0' and s[1] != 1)
    cout << s.size() << '\n';
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
