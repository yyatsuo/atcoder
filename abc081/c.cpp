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
  int N, K; cin >> N >> K;
  map<int, int> A;
  rep(i, N) {
   int num; cin>>num;
   if(A.count(num)) A.at(num)++;
   else A.insert(make_pair(num, 1));
  }
  vector<int> num;
  for(auto a:A) num.push_back(a.second);
  sort(num.begin(), num.end());
  ll ans = 0;
  if(num.size() > K) {
    for(int i=0; i<num.size()-K; ++i) ans += num[i];
  }
  cout << ans << endl;
}

