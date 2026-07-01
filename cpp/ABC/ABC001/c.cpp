#include <iostream>
#include <string>
using namespace std;

int main() {
    int Deg, Dis;
    cin >> Deg >> Dis;

    string Dir[] = {"N", "NNE", "NE", "ENE", "E", "ESE",
                    "SE", "SSE", "S", "SSW", "SW", "WSW",
                    "W", "WNW", "NW", "NNW"};

    int windDir;
    if (2 * Deg < 225 || 2 * Deg >= 6975)
        windDir = 0; // N
    else
        windDir = (2 * Deg - 225) / 450 + 1;

    int wind10 = (Dis * 10 + 30) / 60;

    int W;
    if      (wind10 <=   2) W = 0;
    else if (wind10 <=  15) W = 1;
    else if (wind10 <=  33) W = 2;
    else if (wind10 <=  54) W = 3;
    else if (wind10 <=  79) W = 4;
    else if (wind10 <= 107) W = 5;
    else if (wind10 <= 138) W = 6;
    else if (wind10 <= 171) W = 7;
    else if (wind10 <= 207) W = 8;
    else if (wind10 <= 244) W = 9;
    else if (wind10 <= 284) W = 10;
    else if (wind10 <= 326) W = 11;
    else                    W = 12;

    if (W == 0)
        cout << "C " << W << endl;
    else
        cout << Dir[windDir] << " " << W << endl;

    return 0;
}

/*
AtCoder問題文：https://atcoder.jp/contests/abc001/tasks/abc001_3    
YouTube解説動画：
解説ブログ：
*/