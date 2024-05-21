#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int balance = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(')
                balance++;
            else {
                if (balance > 0)
                    balance--;
                else
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
