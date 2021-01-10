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

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; cin >> N;
  vector<ull> A(pow(2,N));
  vector<int> index(pow(2,N));
  rep(i, pow(2,N)) {
    cin >> A[i];
    index[i] = i;
  }
  while(index.size() != 2) {
    vector<int> tmp(index.size()/2);
    rep(i, index.size()/2) {
      int win;
      if(A[index[2*i]] > A[index[2*i+1]]) win = index[2*i];
      else win = index[2*i+1];
      tmp[i] = win;
    }
    index = tmp;
  }

  if(A[index[0]] < A[index[1]]) cout << index[0]+1 << endl;
  else cout << index[1]+1 << endl;
}

