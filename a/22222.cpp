//https://atcoder.jp/contests/abc394/tasks/abc394_a

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string result = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '2') {
            result.push_back('2');
        }
    }

    cout << result << endl;
    return 0;
}