#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int arr[7][7];
    // Input the 6x6 array
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++)
            cin >> arr[i][j];
    }

    // Initialize the 3D vector where each v[i][j] is a 4x4 matrix
    vector<vector<vector<int>>> v(7, vector<vector<int>>(7, vector<int>(4 * 4, 0)));

    // Copy 3x3 submatrices from arr to v
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            for (int r = i, x = 0; r <= min(6, i + 3 - 1); r++, x++) {
                for (int c = j, y = 0; c <= min(6, j + 3 - 1); c++, y++) {
                    v[i][x * 4 + y] = arr[r][c];  // Store in the flattened 4x4 grid in 1D form
                }
            }
        }
    }

    // Example output: printing the first 3x3 matrix from v[1]
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << v[1][i * 4 + j] << ' ';
        }
        cout << '\n';
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
