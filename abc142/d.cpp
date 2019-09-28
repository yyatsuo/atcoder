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
ll gcd(ll a, ll b) { return b?gcd(b, a%b):a; }

bool is_prime(ll n) {
  if(n==1) return false;
  else if (n == 2) return true;
  else if (n%2 == 0) return false;
  double sqrtn = sqrt(n);
  for(int i = 3; i <= sqrtn; i+=2) {
    if(n%i == 0) return false;
  }
  return true;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll A, B; cin >> A >> B;
  ll j = min(A,B);
  ll ans = 1;
  for(ll i=1; i*i<=j; ++i) {
    if(j%i != 0) continue;
    if(A%i==0 && B%i==0) if(is_prime(i)) ++ans;
    if(j/i == i) continue;
    if(A%(j/i)==0 && B%(j/i)==0) if(is_prime(j/i)) ++ans;
  }
  cout << ans << endl;
}

