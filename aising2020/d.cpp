#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

void flip(char &a) {
  if(a=='0') a = '1';
  else a = '0';
}

string to_binary(int i) {
  string str(bitset<32>(i).to_string<char, char_traits<char>, allocator<char> >());
  return str;
}

int popcnt(int i) {
  string bin = to_binary(i);
  int cnt = 0;
  for(char c:bin) {
    if(c == '1') ++cnt;
  }
  return cnt;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; string X;
  cin >> N >> X;
  int max;
  if(X[0]=='0') {
    X[0]='1';
    max = stoi(X, 0, 2);
    X[0]='0';
  } else {
    max = stoi(X, 0, 2);
  }
  cout << max << endl;
  vector<int> vrem(max);
  for(int i = 1; i<=max; ++i) {
    int tmp = popcnt(i);
    vrem[i] = i%tmp;
  }
  for(auto i:vrem) {
    cout << i << endl;
  }
}

