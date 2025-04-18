//https://atcoder.jp/contests/abc399/tasks/abc399_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s,t;
    
    cin >> n;
    cin >> s >> t;
    int count = 0;

    for (int i = 0; i < n; i++){
        if (s[i] != t[i]){
            count++;
        }
    }

    cout << count << endl;
}