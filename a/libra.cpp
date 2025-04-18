//https://atcoder.jp/contests/abc083/tasks/abc083_a

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int lnum = a + b;
    int rnum = c + d;

    if (lnum > rnum){
        cout << "Left" << endl;
    }
    else if (lnum < rnum){
        cout << "Right" << endl;
    }
    else {
        cout << "Balanced" << endl;
    }
    
}