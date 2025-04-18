//https://atcoder.jp/contests/abc389/tasks/abc389_a

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int s1 = s.at(0) - '0';
    int s2 = s.at(2) - '0';
    cout << s1 * s2 << endl;
}