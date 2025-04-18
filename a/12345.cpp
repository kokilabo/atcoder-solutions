//https://atcoder.jp/contests/abc390/tasks/abc390_a

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(5);
    vector<int> sorted_a = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 4; i++) {
        vector<int> temp_a = a; 
        swap(temp_a[i], temp_a[i + 1]); 
        if (temp_a == sorted_a) {
            cout << "Yes" << endl;
            return 0; 
        }
    }

    cout << "No" << endl;
    return 0;
}