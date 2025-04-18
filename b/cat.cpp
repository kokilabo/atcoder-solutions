//https://atcoder.jp/contests/abc394/tasks/abc394_b

#include<bits/stdc++.h>
using namespace std;


int main(){
   int n;
   cin >> n;

   vector<string> vec(n);
   for (int i = 0; i < n; i++) {
    cin >> vec[i];
   }
   sort(vec.begin(), vec.end(), [](const string &a, const string &b) {
    return a.size() < b.size() || (a.size() == b.size() && a < b);
});
   string result = accumulate(vec.begin(), vec.end(), string(""));
   cout << result << endl;
}