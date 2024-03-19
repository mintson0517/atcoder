#include <iostream>

using namespace std;

int main() {
    long long X;
    cin >> X;

    cout << (X + ((10 - (X % 10)) % 10)) / 10 << endl;
    return 0;
}
