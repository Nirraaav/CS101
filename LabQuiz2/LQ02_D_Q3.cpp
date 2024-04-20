#ifndef PRAGMA
	#pragma GCC optimize("O3,unroll-loops")
	#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#endif

#include <bits/stdc++.h>
 
using namespace std;

#ifdef DEBUG
	#include "/includes/debug.h"
#else
	#define dbg(...) 
#endif

typedef long long int ll;
typedef long double ld;
 
const ld pi = acos(-1.0);

#define lb lower_bound
#define ub upper_bound
#define endl '\n'
#define sz(x) (ll) x.size()
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(), v.rend() 
#define pb push_back
#define mp make_pair

typedef pair<long long int, long long int> pll;
typedef vector<long long int> vl;
typedef vector<vector<long long int>> vvl;

struct pt {
    double x, y;
    bool operator == (pt const& t) const {
        return x == t.x && y == t.y;
    }
};

int orientation(pt a, pt b, pt c) {
    double v = a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y);
    if (v < 0) return -1; // clockwise
    if (v > 0) return +1; // counter-clockwise
    return 0;
}

bool cw(pt a, pt b, pt c, bool include_collinear) {
    int o = orientation(a, b, c);
    return o < 0 || (include_collinear && o == 0);
}
bool collinear(pt a, pt b, pt c) { return orientation(a, b, c) == 0; }

void convex_hull(vector<pt>& a, bool include_collinear = false) {
    pt p0 = *min_element(a.begin(), a.end(), [](pt p, pt q) {
        return make_pair(p.y, p.x) < make_pair(q.y, q.x);
    });
    
    sort(a.begin(), a.end(), [&p0](const pt& p, const pt& q) {
        int o = orientation(p0, p, q);
        if (o == 0)
            return (p0.x-p.x)*(p0.x-p.x) + (p0.y-p.y)*(p0.y-p.y) < (p0.x-q.x)*(p0.x-q.x) + (p0.y-q.y)*(p0.y-q.y);
        return o < 0;
    });

    if (include_collinear) {
        int i = (int)a.size()-1;
        while (i >= 0 && collinear(p0, a[i], a.back())) i--;
        reverse(a.begin()+i+1, a.end());
    }

    vector<pt> st;
    for (int i = 0; i < (int)a.size(); i++) {
        while (st.size() > 1 && !cw(st[st.size()-2], st.back(), a[i], include_collinear))
            st.pop_back();
        st.push_back(a[i]);
    }

    if (include_collinear == false && st.size() == 2 && st[0] == st[1])
        st.pop_back();

    a = st;
}

void solve(){
	ll n;
	cin >> n;
	vector<pt> a(n);
	vector<pt> b(n);
	for(ll i = 0; i < n; i++){
		cin >> a[i].x >> a[i].y;
		b[i] = a[i];
	}
	convex_hull(a);
	vl ans;
	for(auto x: a){
		for(ll i = 0; i < n; i++){
			if(x == b[i]){
				ans.pb(i);
			}
		}
	}

	ll mn = LLONG_MAX;
	ll mn_idx = -1;
	reverse(all(ans));
	for(ll i = 0; i < sz(ans); i++){
		if(ans[i] < mn){
			mn = ans[i];
			mn_idx = i;
		}
	}

	for(ll i = 0; i <= sz(ans); i++){
		cout << ans[(i+mn_idx)%sz(ans)] << " ";
	}
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);	

	ll t = 1;
	// cin >> t;
	while(t--){
		solve();
	}    
}    