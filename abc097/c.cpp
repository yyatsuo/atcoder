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
  string s; int k; cin >> s >> k;
  vector<string> arr;
  for(int i=1; i<=s.size() && i<=k; ++i) {
    rep(j, s.size()-i+1) {
      arr.push_back(s.substr(j, i));
    }
  }
  sort(arr.begin(), arr.end());
  unique(arr.begin(), arr.end());
  cout << arr[k-1] << endl;
}

