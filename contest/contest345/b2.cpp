#include <iostream>
using namespace std;

long long div_ceil(long long a, long long b) {
    return (a >= 0 ? (a + b - 1) : a) / b;
}

int main() {
    long long X;
    cin >> X;
    
    cout << div_ceil(X, 10) << endl;
}
