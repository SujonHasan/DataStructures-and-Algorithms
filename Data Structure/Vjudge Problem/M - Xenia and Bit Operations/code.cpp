#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;

int a[N];
int pn;

struct ST {
    #define lc (n << 1)
    #define rc ((n << 1) + 1)
    int t[4 * N];
    ST() {
        memset(t, 0, sizeof t);
    }
    inline void pull(int n, int level) {
        t[n] = ((pn - level) & 1) ? (t[lc] ^ t[rc]) : (t[lc] | t[rc]);  
    }
    void build(int n, int b, int e, int level) {
        if(b == e) {
            t[n] = a[b];
            return;
        }
        int mid = (b + e) >> 1;
        build(lc, b, mid, level + 1);
        build(rc, mid + 1, e, level + 1);
        pull(n, level);
    }
    void upd(int n, int b, int e, int i, int x, int level) {
        if(b > i || e < i) return;
        if(b == e && b == i) {
            t[n] = x;
            return;
        }
        int mid = (b + e) >> 1;
        upd(lc, b, mid, i, x, level + 1);
        upd(rc, mid + 1, e, i, x, level + 1);
        pull(n, level);
    }
}t;

void solve() {
	int n, m; cin >> n >> m;
	pn = n;
	n = (1 << n);
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	t.build(1, 1, n, 1);
	while(m--) {
		int x, v; cin >> x >> v;
		t.upd(1, 1, n, x, v, 1);
		cout << t.t[1] << '\n';
	}
}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tt = 1;
    // cin >> tt;
    while(tt--) {
    	solve();
    }

return 0;
}