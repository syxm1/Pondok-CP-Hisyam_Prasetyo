#include<bits/stdc++.h>
using namespace std;

signed main() {
        map<char, int> cnt;
        for(int i = 0; i < 5; i++) {
                char x, y;
                cin >> x >> y;
                cnt[x]++;
        }
        int ans = 0;
        for(auto &x : cnt) {
                ans = max(ans, x.second);
        }
        cout << ans << '\n';
}
