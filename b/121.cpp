//https://atcoder.jp/contests/abc086/tasks/abc086_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    string str_a = to_string(a);
    string str_b = to_string(b);
    string str_a_b = str_a + str_b;
    
    int ab = stoi(str_a_b);

    int root = sqrt(ab);

    if (root * root == ab) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}