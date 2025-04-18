//https://atcoder.jp/contests/abc398/tasks/abc398_a

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    deque<char> a; 
    
    if (n % 2 == 0){
        a.push_back('=');
        a.push_back('=');
        int gnum = n-2;
        gnum = gnum / 2;
        for (int i = 0; i < gnum; i++){
            a.push_front('-'); 
            a.push_back('-');
        }
    } else {
        a.push_back('='); 
        int gnum = n-1;
        gnum = gnum / 2;
        for (int i = 0; i < gnum; i++){
            a.push_front('-');
            a.push_back('-');
        }
    }
    
    for(char c : a){
        cout << c;
    }
    cout << endl;
    
    return 0;
}