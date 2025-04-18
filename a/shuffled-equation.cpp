//https://atcoder.jp/contests/abc392/tasks/abc392_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> n;

    for (int i = 0; i < 3; i++) {
        int num;
        cin >> num;
        n.push_back(num);
    }
    sort(n.begin(), n.end());

    if(n.at(0)*n.at(1) == n.at(2)){
        cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }


}