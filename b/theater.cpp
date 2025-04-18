//https://atcoder.jp/contests/abc073/tasks/abc073_b

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> events;
    for (int i = 0; i < N; ++i) {
        int l, r;
        cin >> l >> r;
        events.emplace_back(l, 1);
        events.emplace_back(r + 1, -1);
    }
    sort(events.begin(), events.end());
    
    int total = 0;
    int current_coverage = 0;
    int prev = 0;
    
    for (const auto& event : events) {
        int x = event.first;
        int delta = event.second;
        if (prev < x) {
            if (current_coverage > 0) {
                total += x - prev;
            }
            prev = x;
        }
        current_coverage += delta;
    }
    
    cout << total << endl;
    
    return 0;
}