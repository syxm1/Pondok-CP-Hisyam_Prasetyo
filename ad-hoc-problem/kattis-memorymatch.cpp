#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

signed main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int n, k;
        cin >> n >> k;

        vector<string> card(n, "");
        map<string, bool> opened;

        for(int i = 0; i < k; i++) {
                int a, b;
                string s, t;

                cin >> a >> b >> s >> t;
                a--, b--;

                if(s == t) opened[s] = 1;

                card[a] = s;
                card[b] = t;
        }

        int known_pair = 0, known_single = 0, unknown = 0;
        map<string, bool> known;

        for(int i = 0; i < n; i++) {
                if(opened[card[i]]) continue;
                else if(card[i] == "") unknown++;
                else if(known[card[i]]) known_pair++, known_single--;
                else known[card[i]] = 1, known_single++;
        }

        if(unknown == 2 && known_single == 0) {
                cout << 1 + known_pair << endl;
                return 0;
        }

        int ans = known_pair + (known_single == unknown ? known_single : 0);
        cout << ans << endl;
}