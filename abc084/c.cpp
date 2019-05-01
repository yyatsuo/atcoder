#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i = 0; i < N - 2; i++)
    cin >> A[i];
  vector<int> right(N - 1);
  vector<int> left(N - 1);
  right[0] = A[0];
  for(int i = 0; i < N - 2; i++) {
    right[i + 1] = gcd(right[i], A[i + 1]);
  }

  vector<int> R(N);
  for(int i = 0; i < N; i++) {
    R[N - 1 - i] = A[i];
  }
  left[0] = R[0];
  for(int i = 0; i < N - 2; i++) {
    left[i + 1] = gcd(left[i], R[i + 1]);
  }
  int ans = max(right[N - 2], left[N - 2]);
  // iはぬくやつ
  for(int i = 1; i < N - 1; i++) {
    int tmp = gcd(right[i - 1], left[N - i - 2]);
    ans = max(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}
