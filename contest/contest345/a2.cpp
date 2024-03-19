#include <iostream>
using namespace std;

bool check(){
    string s;
    cin >> s;

    int n = s.size();
    if (s[0] != '<' || s.back() != '>') return false;

    for (int i = 1; i < n - 1; i++) {
        if (s[i] != '=')return false;
    }
    return true;
}

int main() {
    if(check()) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
