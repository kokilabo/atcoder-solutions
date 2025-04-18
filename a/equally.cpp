//https://atcoder.jp/contests/abc385/tasks/abc385_a

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "Yes" << endl;
    } else if (a + b == c) {
        cout << "Yes" << endl;
    } else if (a == b + c) {
        cout << "Yes" << endl;
    } else if (a + c == b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}