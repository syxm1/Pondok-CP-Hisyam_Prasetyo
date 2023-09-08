#include<bits/stdc++.h>
using namespace std;

signed main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int n, x, y;
        
        cin >> x >> n;
        x = (n + 1) * x;

        for(int i = 0; i < n; i++) {
                cin >> y;
                x -= y;
        }

        cout << x << '\n';
}