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

bool f(string S) {
  for(int i=0; i<S.size()/2; ++i) {
    if(S[i] != S[S.size()-1-i]) return false;
  }
  return true;
}

int main() {
  string S; cin >> S;
  int N = S.size();
  string S_a = S.substr(0, (N-1)/2);
  string S_b = S.substr((N+3)/2-1, N-((N+3)/2-1));
  if(f(S) && f(S_a) && f(S_b)) cout << "Yes" << endl;
  else cout << "No" << endl;
}

