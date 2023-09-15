#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve() {
    char cx1, cx2;
    int x1, y1, x2, y2;
    cin >> cx1 >> y1 >> cx2 >> y2;
    
    x1 = cx1 - 'A';
    x2 = cx2 - 'A';

    // cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << endl;
    
    int g1s = x1 + y1;
    int g2s = x1 - y1;
    int g1e = x2 + y2;
    int g2e = x2 - y2;

	int nx1 = (g1s + g2e) / 2;
	int ny1 = g1s - nx1;
	int nx2 = (g1e + g2s) / 2;
	int ny2 = g1e - nx2;

    if((x1 + y1) % 2 != (x2 + y2) % 2) {
        cout << "Impossible" << endl;
        return;
    }
    
    if(x1 == x2 && y1 == y2) {
        cout << 0 << ' ' << char(x1 + 'A') << ' ' << y1 << endl;
        return;
    }

    if(g1s == g1e || g2s == g2e) {
        cout << 1 << ' ' << char(x1 + 'A') << ' ' << y1 << ' ' << char(x2 + 'A') << ' ' << y2 << endl;
        return;
    }
    
	if(nx2 >= 0 && nx2 < 8 && ny2 > 0 && ny2 <= 8) {
		cout << 2 << ' ' << char(x1 + 'A') << ' ' << y1 << ' ' << char(nx2 + 'A') << ' ' << ny2 << ' ' << char(x2 + 'A') << ' ' << y2 << endl;
	} else if(nx1 >= 0 && nx1 < 8 && ny1 > 0 && ny1 <= 8) {
		cout << 2 << ' ' << char(x1 + 'A') << ' ' << y1 << ' ' << char(nx1 + 'A') << ' ' << ny1 << ' ' << char(x2 + 'A') << ' ' << y2 << endl;
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc;
    cin >> tc;
    
    while(tc--) {
        solve();
    }
    
    return 0;
}