#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n;
        cin >>n;
        int mn = 1e12;
        for(int i = 0; i < n; i++) {
                int x;
                cin >> x;
                mn = min(mn, abs(x-0));
        }       
        cout << mn << '\n';
}