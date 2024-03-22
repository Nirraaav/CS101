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

// Trie Node Structure
struct TrieNode {
    TrieNode* children[26];
    bool isEndOfWord;
};

// Initialize a new Trie Node
TrieNode* getNewNode() {
    TrieNode* node = new TrieNode;
    node->isEndOfWord = false;
    for (int i = 0; i < 26; ++i)
        node->children[i] = nullptr;
    return node;
}

// Insert a word into the Trie
void insertWord(TrieNode* root, string word) {
    TrieNode* current = root;
    for (char c : word) {
        int index = c - 'A';
        if (index < 0 || index >= 26) {
            // Handle characters outside the valid range
            continue;
        }
        if (!current->children[index])
            current->children[index] = getNewNode();
        current = current->children[index];
    }
    current->isEndOfWord = true;
}

// Check if a word exists in the Trie and contains only letters from 'have'
bool searchWord(TrieNode* root, string word, vector<char>& have) {
    TrieNode* current = root;
    for (char c : word) {
        int index = c - 'A';
        if (index < 0 || index >= 26 || !current->children[index]) {
            // Handle characters outside the valid range or Trie node is null
            return false;
        }
        if (find(have.begin(), have.end(), c) == have.end()) {
            // Character not found in 'have'
            return false;
        }
        current = current->children[index];
    }
    return (current != nullptr && current->isEndOfWord);
}

void solve() {
    vector<vector<char>> c(15, vector<char>(15, '-'));
    for (ll i = 0; i < 15; i++) {
        for (ll j = 0; j < 15; j++) {
            cin >> c[i][j];
        }
    }

    // dbg(c);

    vector<char> have(7);
    for (ll i = 0; i < 7; i++) {
        cin >> have[i];
    }

    // dbg(have);

    TrieNode* root = getNewNode(); // Initialize the Trie

    // cout << root << "\n";

    vector<string> words;
    string word;
    while (cin >> word) {
        words.pb(word);
        insertWord(root, word); // Insert each word into the Trie
    }

    sort(all(words), [&](string s1, string s2) {
        return sz(s1) > sz(s2);
    });

    string w1 = "";
    vl v1 = {-1, -1, -1, -1};
    string w2 = "";
    vl v2 = {-1, -1, -1, -1};
    bool rows = false, cols = false;

    for (auto w : words) {
        if (!rows) {
            for (ll row = 0; row < 15; row++) {
                for (ll col1 = 0; col1 + sz(w) - 1 < 15; col1++) {
                    ll col2 = col1 + sz(w) - 1;
                    if (col2 >= 15) {
                        // Ensure col2 is within valid range
                        break;
                    }
                    vector<char> have1 = have;
                    string current_word = "";
                    for (ll i = col1; i <= col2; i++)
                        current_word += c[row][i];
                    if (searchWord(root, current_word, have)) {
                        w1 = current_word;
                        rows = true;
                        v1 = {col1 + 1, row + 1, col2 + 1, row + 1};
                        break;
                    }
                    have = have1;
                    if (rows)
                        break;
                }
                if (rows)
                    break;
            }
        }
        if (!cols) {
            for (ll col = 0; col < 15; col++) {
                for (ll row1 = 0; row1 + sz(w) - 1 < 15; row1++) {
                    ll row2 = row1 + sz(w) - 1;
                    if (row2 >= 15) {
                        // Ensure row2 is within valid range
                        break;
                    }
                    vector<char> have1 = have;
                    string current_word = "";
                    for (ll i = row1; i <= row2; i++)
                        current_word += c[i][col];
                    if (searchWord(root, current_word, have)) {
                        w2 = current_word;
                        cols = true;
                        v2 = {col + 1, row1 + 1, col + 1, row2 + 1};
                        break;
                    }
                    have = have1;
                    if (cols)
                        break;
                }
                if (cols)
                    break;
            }
        }
        if (cols && rows)
            break;
    }
    if (sz(w1) > sz(w2)) {
        cout << v1[0] << " " << v1[1] << "\n";
        cout << v1[2] << " " << v1[3] << "\n";
        cout << w1 << "\n";
    } else if (sz(w1) < sz(w2)) {
        cout << v2[0] << " " << v2[1] << "\n";
        cout << v2[2] << " " << v2[3] << "\n";
        cout << w2 << "\n";
    } else {
        if (v1[0] <= v2[0]) {
            cout << v1[0] << " " << v1[1] << "\n";
            cout << v1[2] << " " << v1[3] << "\n";
            cout << w1 << "\n";
        } else {
            cout << v2[0] << " " << v2[1] << "\n";
            cout << v2[2] << " " << v2[3] << "\n";
            cout << w2 << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}
