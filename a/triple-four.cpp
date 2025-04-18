//https://atcoder.jp/contests/abc396/tasks/abc396_a

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool ans = false;
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            count++;
            if (count >= 3) {
                ans = true;
                break;
            }
        } else {
            count = 1;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}