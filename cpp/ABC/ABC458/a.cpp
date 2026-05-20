#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int N;

    cin >> S;
    cin >> N;

    cout << S.substr(N, S.size() - 2 * N) << endl;

    return 0;
}