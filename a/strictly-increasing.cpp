//https://atcoder.jp/contests/abc395/tasks/abc395_a

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
       bool num = true;
    for(int i = 1; i < n; i++) {
        if(a[i] <= a[i - 1]) {
            num = false;
            break;
        }
    }

    if(num) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


}