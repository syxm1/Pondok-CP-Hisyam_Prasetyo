#include<bits/stdc++.h>
using namespace std;

signed main() {
        int n;
        cin >> n;
        vector<string> a(n), inc(n), dec(n);
        for(int i = 0; i < n; i++) {
                cin >> a[i];
                inc[i] = a[i];
                dec[i] = a[i];
        }
        sort(inc.begin(), inc.end());
        sort(dec.rbegin(), dec.rend());
        bool naik = 1, turun = 1;
        for(int i = 0; i < n; i++) {
                if(a[i]!=inc[i]) naik = 0;
                if(a[i]!=dec[i]) turun = 0;
        }
        if((naik&&turun)||(!naik&&!turun)) cout << "NEITHER\n";
        if(naik) cout << "INCREASING\n";
        if(turun) cout << "DECREASING\n";
}