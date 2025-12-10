#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if(A < C){
        if(B > D) cout << "Yes" << endl;
        else cout << "No" << endl;
    }else{
        cout << "No" << endl;
    }
}