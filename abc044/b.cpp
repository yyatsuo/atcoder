#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
char arr[26];
int main() {
  string s; cin >> s;
  for(char c:s) {
    arr[c-'a']++;
  }
  rep(i, 26) {
    if(arr[i]%2){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}

