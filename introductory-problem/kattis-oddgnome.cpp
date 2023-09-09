#include<bits/stdc++.h>
using namespace std;

signed main() {
        int tc;
        cin >> tc;
        while(tc--) {
                int n;
                cin >> n;
                vector<int> a(n);       
                for(int i = 0; i < n; i++) {
                        cin >> a[i];
                }
                for(int i = 1; i < n - 1; i++) {
                        if(a[i]!=a[i-1]+1) {
                                cout << i+1 << '\n';
                                break;
                        }
                }
        }
}
