#include<bits/stdc++.h>
using namespace std;

#define double long double

signed main() {
        double x, y;
        cin >> x >> y;

        if(x!=0&&y==1) {
                cout << "IMPOSSIBLE\n";
        } else if(x==0&&y==1) {
                cout << "ALL GOOD\n";
        } else {        
                cout << setprecision(9) << x / (1 - y) << '\n';
        }
}