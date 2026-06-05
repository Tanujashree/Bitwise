#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int L = s.length();

    // Counter from 1 to (2^L - 1)
    for (int ctr = 1; ctr < (1 << L); ctr++) {

        string combi = "";

        for (int sh = 0; sh < L; sh++) {

            // Check if sh-th bit is set
            if (ctr & (1 << sh)) {
                combi += s[sh];
            }
        }

        cout << combi << endl;
    }

    return 0;
}
