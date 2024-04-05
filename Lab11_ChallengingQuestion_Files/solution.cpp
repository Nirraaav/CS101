#ifndef PRAGMA
    #pragma GCC optimize("O3,unroll-loops")
    #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#endif

#include <bits/stdc++.h>
#include <fstream>

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

void solve() {
    vector<string> dict;
    ifstream file("dict.txt");
    string word;
    while (file >> word) {
        dict.push_back(word);
    }
    file.close();

    vector<string> words_6;
    for (auto word : dict) {
        if (word.size() == 6) {
            words_6.push_back(word);
        }
    }

    vector<string> words;
    string input_word;
    while (cin >> input_word) {
        input_word.erase(remove_if(input_word.begin(), input_word.end(), ::ispunct), input_word.end());
        words.push_back(input_word);
    }

    for (auto word : words_6) {
        string cipher = word;
        char last = cipher.back();
        for (int i = 1; i <= 26; i++) {
            char nextLetter = last + i;
            if (nextLetter > 'Z'){
                nextLetter -= 26;
            }

            if (cipher.find(nextLetter) == string::npos){
                cipher += nextLetter;
            }
        }

        bool check = true;

        for (auto &word : words) {
            string decoded_word;
            for (char c : word) {
                if (isalpha(c)) {
                    ll index = cipher.find(c + 'A' - 'a');
                    decoded_word += 'A' + index;
                } else {
                    decoded_word += c;
                }
            }
            if (find(all(dict), decoded_word) == dict.end()) {
                check = false;
                break;
            }
        }

        if (check) {
            transform(all(cipher), cipher.begin(), ::tolower);
            cout << cipher << endl;
            break;
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
