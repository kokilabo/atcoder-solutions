//https://atcoder.jp/contests/abc080/tasks/abc080_a

#include <bits/stdc++.h>
using namespace std;

int main(){
     int n,a,b;
     cin >> n >> a >> b;
     if (n*a > b){
        cout << b << endl;
     }
     else if (n*a < b){
        cout << n*a << endl;
     }
     else{
        cout << b << endl;
     }
     


}