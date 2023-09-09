#include<bits/stdc++.h>
using namespace std;

signed main() {
        int t;
        cin >> t;

        while(t--) {
                int n, m;
                cin >> n >> m;

                vector<vector<int>> s(n);
                vector<int> k(n);

                for(int i = 0; i < n; i++) {
                        int c;
                        cin >> c;

                        for(int j = 0; j < c; j++) {
                                int x; cin >> x; x--;
                                s[i].push_back(x);
                        }

                        cin >> k[i];
                }

                vector<int> cnt(m);

                for(int i = 0; i < m; i++) {
                        cin >> cnt[i];
                }

                int ans = 0;

                for(int i = 0; i < n; i++) {
                        int mn = 1e8;

                        for(int j = 0; j < (int) s[i].size(); j++) {
                                mn = min(mn, cnt[s[i][j]]);
                        }

                        ans += mn * k[i];
                }

                cout << ans << endl;
        }
}
