//https://atcoder.jp/contests/abc086/tasks/abc086_a

#include <bits/stdc++.h>
using namespace std;

int main(){
  int a;
  int b;
  cin >> a >> b;
  if ((a * b) % 2 == 0){
    cout <<"Even"<<endl;
  }else{
    cout << "Odd" << endl;
  }
}