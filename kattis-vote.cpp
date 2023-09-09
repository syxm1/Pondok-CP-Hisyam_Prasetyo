#include<bits/stdc++.h>
using namespace std;

signed main() {
        int t;
        cin >> t;
        while(t--) {
                int n;
                cin >> n;
                map<int, int> cnt;
                int tot = 0, mx = 0, mxid = -1;
                for(int i = 0; i < n; i++) {
                        int x;
                        cin >> x;
                        cnt[x]++;
                        if(x >= mx) {
                                mxid = i;
                                mx = x;
                        }
                        tot += x;
                }       
                if(cnt[mx]>1) cout << "no winner\n";
                else if(2 * mx > tot) cout << "majority winner " << mxid + 1 << '\n';
                else if(2 * mx <= tot) cout << "minority winner " << mxid + 1 << '\n';
        }
}