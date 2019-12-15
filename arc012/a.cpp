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
  map<string, int> m;
  m.insert(make_pair("Sunday", 0));
  m.insert(make_pair("Monday", 5));
  m.insert(make_pair("Tuesday", 4));
  m.insert(make_pair("Wednesday", 3));
  m.insert(make_pair("Thursday", 2));
  m.insert(make_pair("Friday", 1));
  m.insert(make_pair("Saturday", 0));
  string day; cin >> day;
  cout << m.at(day) << endl;
}

