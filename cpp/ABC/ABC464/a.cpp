#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    cin >> S;

    int east = 0;

    for (char c : S)
    {
        if (c == 'E')
            east++;
    }

    if (east > S.length() / 2)
        cout << "East";
    else
        cout << "West";

    return 0;
}

/*
AtCoder: https://atcoder.jp/contests/abc464/tasks/abc464_a
ブログ解説：https://yorunekomint.com/?p=221
YouTube解説：https://youtu.be/hZUOph07fB4
*/