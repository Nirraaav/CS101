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

vector<vector<long long int>> matrix_mul(vector<vector<long long int>> a, vector<vector<long long int>> b){
	long long int n = sz(a);
	vector<vector<long long int>> c(n, vector<long long int>(n, 0));
	for(long long int i = 0; i < n; i++){
		for(long long int j = 0; j < n; j++){
			for(long long int k = 0; k < n; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return c;
}
 
void solve(){
	long long int n, l, start, end;
	cin >> n >> l >> start >> end;
	vector<vector<long long int>> a(n, vector<long long int>(n, 0));
	for(long long int i = 0; i < l; i++)
{		long long int x, y;
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	long long int ans = 1;
	vector<vector<long long int>> a_orig = a;
	while(1){
		if(a[start][end]){
			cout << ans << "\n"; 
			break;
		}else{
			ans++;
			a = matrix_mul(a, a_orig);
		}
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