#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            int cnt = 0;

            // up
            if (i > 0) cnt++;

            // down
            if (i < H - 1) cnt++;

            // left
            if (j > 0) cnt++;

            // right
            if (j < W - 1) cnt++;

            cout << cnt;

            if(j != w-1) cout << " ":
        }

        cout << endl;
    }

    return 0;
}
