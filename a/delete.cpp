//https://atcoder.jp/contests/abc372/tasks/abc372_a

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '.') {
            s.erase(i, 1);
        } else {
            i++;
        }
    }

    cout << s << endl;
}