#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()

signed main() {
        string a, b;
        cin >> a >> b;
        reverse(all(a));
        reverse(all(b));
        int x = stoi(a);
        int y = stoi(b);
        cout << max(x, y);
}