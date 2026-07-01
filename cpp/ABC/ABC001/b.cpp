#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m;
    cin >> m;

    int vv =
        m < 100 ? 0 :
        m <= 5000 ? m / 100 :
        m <= 30000 ? m / 1000 + 50 :
        m <= 70000 ? (m / 1000 - 30) / 5 + 80 : 89;

    cout << setw(2) << setfill('0') << vv << endl;
    return 0;
}

/*
AtCoder問題文：https://atcoder.jp/contests/abc001/tasks/abc001_2
YouTube解説動画：
解説ブログ：
*/