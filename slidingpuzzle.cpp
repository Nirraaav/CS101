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

struct State {
    vector<vector<ll>> board;
    ll steps;
};

bool statesEqual(vvl &state1, vvl &state2) {
    return state1 == state2;
}

vector<State> getSuccessors(vvl &state, ll steps) {
    vector<State> successors;
    ll row = -1, col = -1;

    for (ll i = 0; i < sz(state); ++i) {
        for (ll j = 0; j < sz(state[i]); ++j) {
            if (state[i][j] == 9) {
                row = i;
                col = j;
                break;
            }
        }
    }

    vector<pll> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    for (auto& move : moves) {
        ll newRow = row + move.first;
        ll newCol = col + move.second;
        if (newRow >= 0 && newRow < sz(state) && newCol >= 0 && newCol < sz(state[newRow])) {
            vector<vector<ll>> newState = state;
            swap(newState[row][col], newState[newRow][newCol]);
            successors.push_back({newState, steps + 1});
        }
    }

    return successors;
}

struct hash_state {
    size_t operator()(const vector<vector<ll>>& state) const {
        size_t hash_val = 0;
        size_t pow = 1;
        for (const auto& row : state) {
            for (const auto& cell : row) {
                // hash_val ^= hash<ll>{}(cell) + 0x9e3779b9 + (hash_val << 6) + (hash_val >> 2);
                hash_val += pow * cell;
                pow *= 10;
            }
        }
        return hash_val;
    }
};

pair<ll, bool> bfs(vvl &initialState, vvl &goalState) {
    queue<State> q;
    unordered_set<vvl, hash_state> visited;
    q.push({initialState, 0});
    visited.insert(initialState);

    while (!q.empty()) {
        State currentState = q.front();
        q.pop();

        if (statesEqual(currentState.board, goalState)) {
            return {currentState.steps, true};
        }

        vector<State> successors = getSuccessors(currentState.board, currentState.steps);
        for (auto& successor : successors) {
            if (visited.find(successor.board) == visited.end()) {
                q.push(successor);
                visited.insert(successor.board);
            }
        }
    }

    return {LLONG_MAX, false}; 
}

void solve(){
    vvl board(3, vector<ll>(3, -1));
    for(ll i = 0; i < 3; i++){
        for(ll j = 0; j < 3; j++){
            cin >> board[i][j];
        }
    }
    vvl goalState = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    auto [minSteps, found] = bfs(board, goalState);

    if (found) {
        cout << minSteps << "\n";
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