#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    string S;

    cin >> N >> K >> S;

    map<string, int> mp;
    for(int i = 0; i + K <= N; i++){
        string sub = S.substr(i, K);
        mp[sub]++;
    }

    int max_count = 0;
    for (auto &p : mp) {
        max_count = max(max_count, p.second);
    }

    vector<string> ans;
    for (auto &p : mp) {
        if (p.second == max_count) ans.push_back(p.first);
    }

    sort(ans.begin(), ans.end());

    cout << max_count << "\n";
    for (int i = 0; i < ans.size(); i++) {
        if (i) cout << " ";
        cout << ans[i];
    }
    return 0;
}