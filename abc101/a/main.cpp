#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int addChar(char ch);

int main() {
  string S;
  cin >> S;

  int ans = 0;

  for (char c : S) {
    ans += addChar(c);
  }

  cout << ans << endl;
  return 0;
}

int addChar(char ch){
  if(ch == '+'){
    return 1;
  }else{
    return -1;
  }
};