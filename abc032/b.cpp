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
  string s; cin >> s;
  int k; cin >> k;
  vector<string> mem;
  for(int i=0; i<(int)s.size()-k; ++i) {
    string tmp = s.substr(i, k);
    if(count(mem.begin(), mem.end(), tmp) == 0) {
      mem.push_back(tmp);
    }
  }
  cout << mem.size() << endl;
}

