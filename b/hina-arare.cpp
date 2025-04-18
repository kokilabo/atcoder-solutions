//https://atcoder.jp/contests/abc089/tasks/abc089_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    bool found_y = false;

    while (x < n) {
        string s;
        cin >> s;
        if (s == "Y"){
            found_y = true; 
            break;         
        }
        x++;
    }

    if (found_y) {
        cout << "Four" << endl;
    } else {
        cout << "Three" << endl;
    }
}