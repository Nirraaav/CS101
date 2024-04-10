#ifndef PRAGMA
	#pragma GCC optimize("O3,unroll-loops")
	#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#endif

#include <bits/stdc++.h>
 
using namespace std;

#ifdef DEBUG
	#include "/includes/debug.h"
#else
	#define dbg(...) 42
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

const ld EPS = 1e-9;
const ll INF = LLONG_MAX; // it doesn't actually have to be infinity or a big number

ll gauss (vector < vector<ld> > a, vector<ld> & ans) {
    ll n = (ll) a.size();
    ll m = (ll) a[0].size() - 1;

    vector<ll> where (m, -1);
    for (ll col=0, row=0; col<m && row<n; ++col) {
        ll sel = row;
        for (ll i=row; i<n; ++i)
            if (abs (a[i][col]) > abs (a[sel][col]))
                sel = i;
        if (abs (a[sel][col]) < EPS)
            continue;
        for (ll i=col; i<=m; ++i)
            swap (a[sel][i], a[row][i]);
        where[col] = row;

        for (ll i=0; i<n; ++i)
            if (i != row) {
                ld c = a[i][col] / a[row][col];
                for (ll j=col; j<=m; ++j)
                    a[i][j] -= a[row][j] * c;
            }
        ++row;
    }

    ans.assign (m, 0);
    for (ll i=0; i<m; ++i)
        if (where[i] != -1)
            ans[i] = a[where[i]][m] / a[where[i]][i];
    for (ll i=0; i<n; ++i) {
        ld sum = 0;
        for (ll j=0; j<m; ++j)
            sum += ans[j] * a[i][j];
        if (abs (sum - a[i][m]) > EPS)
            return 0;
    }

    for (ll i=0; i<m; ++i)
        if (where[i] == -1)
            return INF;
    return 1;
}
 
void solve(){
	ll n;
	cin >> n;
	vector<vector<ld>> a(n, vector<ld>(n + 1));
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	for(ll i = 0; i < n; i++){
		cin >> a[i][n];
	}
	vector<ld> ans(n);
	gauss(a, ans);
	// cout << fixed << setprecision(10);
	for(auto i : ans) cout << i << " ";
	cout << "\n";
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