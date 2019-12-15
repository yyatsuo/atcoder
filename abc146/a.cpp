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
  string s; cin >> s;
    if(s == "SAT") cout << 1;
    else if(s == "FRI") cout << 2;
    else if(s == "THU") cout << 3;
    else if(s == "WED") cout << 4;
    else if(s == "TUE") cout << 5;
    else if(s == "MON") cout << 6;
    else if(s == "SUN") cout << 7;
}

