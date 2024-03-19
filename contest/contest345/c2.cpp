//配列を使用して問題を解く
#include <iostream>
#include <string>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

ll c2(ll n) {
    return n * (n - 1) / 2;
}

int main() {
    string s;
    cin >> s;
    int n = s.size();

    ll same = 0;
    int cnt[26] = {0}; 
    for (char c : s){
        cnt[c - 'a']++; 
    }

    for (int i = 0; i < 26; ++i) {
        int m = cnt[i];
        same += c2(m);
    }

    ll diff = c2(n) - same;

    ll ans = diff;
    if (same)
        ans++;

    cout << ans << endl;
    return 0;
}
