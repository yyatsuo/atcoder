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
  vector<float> v(N);
  rep(i, N) cin >> v[i];
  while(v.size() > 1){
    sort(v.begin(), v.end(), greater<float>());
    float tmp_a = v.back(); v.pop_back();
    float tmp_b = v.back(); v.pop_back();
    v.push_back((tmp_a+tmp_b)/2);
  }
  cout << v.front() << endl;
}

