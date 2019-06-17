#include <bits/stdc++.h>
#define rep(i, n) for(ll i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main()
{
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll l=0, r=0;
  ll sum=0, ans=0;
  while(r < n){
    sum += a[r];
    while(sum>=k){
      ans += n-r;
      sum -= a[l];
      ++l;
    }
    if(r<n) ++r;
  }
  cout << ans << endl;
  return 0;
}
