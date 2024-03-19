#ifndef PRAGMA
	#pragma GCC optimize("O3,unroll-loops")
	#pragma GCC target("avx2,bmi2")		
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

bool check2(char c, vector<char> have){
	return find(all(have), c) != have.end();
}

bool check(string s, ll ax, ll ay, ll bx, ll by, vector<vector<char>> c, vector<char> &have){
	// cout << ax << " " << ay << " " << bx << " " << by << "\n";
	vector<vector<char>> c_check = c;
	string s_check = "";
	bool none = true;
	bool all = true;
	if(ax == bx){
		for(ll i = ay; i <= by; i++){
			if(c_check[ax][i] == '-'){
				c_check[ax][i] = s[i-ay];
				all = false;
				if(!check2(c_check[ax][i], have)){
					return false;
				}
				auto it = find(all(have), c_check[ax][i]);
				if (it != have.end()) {
        			have.erase(it);
   				}
			}else{
				none = false;
			}
			s_check += c_check[ax][i];
		}
		if(s == s_check && !none && !all){
			return true;
		}else{
			return false;
		}
	}else if(ay == by){
		for(ll i = ax; i <= bx; i++){
			if(c_check[i][ay] == '-'){
				c_check[i][ay] = s[i-ax];
				all = false;
				if(!check2(c_check[i][ay], have)){
					return false;
				}
				auto it = find(all(have), c_check[i][ay]);
				if (it != have.end()) {
        			have.erase(it);
   				}
			}else{
				none = false;
			}
			s_check += c_check[i][ay];
		}
		if(s == s_check && !none && !all){
			return true;
		}else{
			return false;
		}
	}else{
		return false;
	}
}
 
void solve(){
	vector<vector<char>> c(15, vector<char>(15, '-'));
	for(ll i = 0; i < 15; i++){
		for(ll j = 0; j < 15; j++){
			cin >> c[i][j];
		}
	}
	vector<char> have(7);
	for(ll i = 0; i < 7; i++){
		cin >> have[i];
	}

	vector<string> words;
	string word;
	while(cin >> word){
		words.pb(word);
	}

	sort(all(words), [&](string s1, string s2){
		return sz(s1) > sz(s2);
	});

	string w1 = "";
	vl v1 = {-1, -1, -1, -1};
	string w2 = "";
	vl v2 = {-1, -1, -1, -1};
	bool rows = false, cols = false; 

	for(auto w : words){
		if(!rows){
			for(ll row = 0; row < 15; row++){
				for(ll col1 = 0; col1 + sz(w) - 1 < 15; col1++){
					ll col2 = col1 + sz(w) - 1;
					vector<char> have1 = have;
					if(check(w, col1, row, col2, row, c, have)){
						w1 = w;
						rows = true;
						v1 = {col1+1, row+1, col2+1, row+1};
						break;
					}
					have = have1;
					if(rows){
						break;
					}
				}
				if(rows){
					break;
				}
			}
		}
		if(!cols){
			for(ll col = 0; col < 15; col++){
				for(ll row1 = 0; row1 + sz(w) - 1 < 15; row1++){
					ll row2 = row1 + sz(w) - 1;
					vector<char> have1 = have;
					if(check(w, col, row1, col, row2, c, have)){
						w2 = w;
						cols = true;
						v2 = {col+1, row1+1, col+1, row2+1};
						break;
					}
					have = have1;
					if(cols){
						break;
					}
				}
				if(cols){
					break;
				}
			}
		}
		if(cols && rows){
			break;
		}
	}
	if(sz(w1) > sz(w2)){
		cout << v1[0] << " " << v1[1] << "\n";
		cout << v1[2] << " " << v1[3] << "\n";
		cout << w1 << "\n";
	}else if(sz(w1) < sz(w2)){
		cout << v2[0] << " " << v2[1] << "\n";
		cout << v2[2] << " " << v2[3] << "\n";
		cout << w2 << "\n";
	}else{
		if(v1[0] <= v2[0]){
			cout << v1[0] << " " << v1[1] << "\n";
			cout << v1[2] << " " << v1[3] << "\n";
			cout << w1 << "\n";
		}else{
			cout << v2[0] << " " << v2[1] << "\n";
			cout << v2[2] << " " << v2[3] << "\n";
			cout << w2 << "\n";
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