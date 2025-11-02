#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S ,ans;
    cin >> S;

    for (char c : S)
        if ('A' <= c && c <= 'Z')
            ans.push_back(c);
    cout << ans << endl;
    return 0;
}