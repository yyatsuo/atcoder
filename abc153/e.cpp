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
  ll H, N; cin >> H >> N;
  vector<ll> A(N), B(N);
  vector<pair<float, int>> DPM(N);

  rep(i,N) {
    cin >> A[i] >> B[i];
    float tmp = (float)A[i]/(float)B[i];
    DPM[i] = make_pair(tmp, i);
  }
  sort(DPM.begin(), DPM.end(), greater<pair<float,int>>());
  vector<ll> candidate;
  rep(z,N) {
    ll ans = 0, idx = 0;
    while(H>0 && idx<N) {
      ans += H/A[idx] * B[idx];
      H = H%A[idx];
      if(H==0) candidate.push_back(ans);
      else candidate.push_back(ans+B[idx]);
      ++idx;
    }
  }
  cout << *min_element(candidate.begin(), candidate.end()) << endl;
}

