#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  int N; cin >> N;
  vector<int> s;
  rep(i, N) {
    int w; cin >> w;
    bool b = false;
    for(int j=0; j<s.size(); ++j) {
      if(s[j] >= w) {
        s[j] = w;
        b = true;
        break;
      }
    }
    if(!b) s.push_back(w);
  }
  cout << s.size() << endl;
}

