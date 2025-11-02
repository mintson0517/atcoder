#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, A, B, X;
    cin >> S >> A >> B >> X;
    cout << S * ( (X / (A + B)) * A + min(X % (A + B), A) ) << endl;
    return 0;
}
