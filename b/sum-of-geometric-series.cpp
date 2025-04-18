//https://atcoder.jp/contests/abc400/tasks/abc400_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    
    const long long INF = 1000000000;
    long long result = 1; 
    long long current = 1; 
    
    for (int i = 1; i <= m; i++) {
        if (current > INF / n) {
            cout << "inf" << endl;
            return 0;
        }
        current *= n;
        
        if (result > INF - current) {
            cout << "inf" << endl;
            return 0;
        }
        result += current;
    }
    
    if (result > INF) {
        cout << "inf" << endl;
    } else {
        cout << result << endl;
    }
    
    return 0;
}