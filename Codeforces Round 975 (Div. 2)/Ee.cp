#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime (int x) {
	if (x < 2)
		return false;

	for (int i = 2; 1ll * i * i <= x; i++) {
		if (x % i == 0)
			return false;
	}

	return true;
}

void solve() {
     
    int n;
    cin >> n;

    int sod = 1;
    for (int i = 2; 1ll * i * i <= n; i++) {
    	if (n % i == 0) {
    		int e = 0, x = i;
    		while (n % i == 0) {
    			n /= i;
    			x *= i;
    		}
    		sod *= ((x - 1) / (i - 1));
    	}
    }

    if (n > 1)
    	sod *= ((n * n) - 1 / n - 1);

    cout << (isPrime(sod) ? "Yes" : "No") << '\n';
    //cout << sod << '\n';
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
