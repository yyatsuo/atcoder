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
  vector<int> arr(5);
  rep(i, 5) cin >> arr[i];
  vector<int> sum;
  for(int i=0; i<3; ++i) {
    for(int j=i+1; j<4; ++j) {
      for(int k=j+1; k<5; ++k) {
        sum.push_back(arr[i]+arr[j]+arr[k]);
      }
    }
  }
  sort(sum.begin(), sum.end(), greater<int>());
  cout << sum[2] << endl;
}

