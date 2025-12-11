#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    cin >> S;

    int L = S.length();
    int mid = L / 2;

    for(int i = 0; i < L; i++){
        if(i != mid) cout << S[i];
    }
    
    return 0;
}