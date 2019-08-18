#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

vector<int> a(1000000);
int main() {
  int s; cin >> s;
  a[s] = 1;
  for(int i=2; ;++i) {
    if(s%2) s = 3*s+1;
    else s = s/2;
    if(a[s]) {
      cout << i << endl;
      break;
    } else {
      a[s]++;
    }
  }
}

