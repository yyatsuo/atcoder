#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main()
{
  int N;
  cin >> N;
  vector<ll> L(N+1);

  for(int i=0; i<=N; ++i) {
    if(i==0) L[i] = 2;
    else if(i==1) L[i] = 1;
    else L[i] = L[i-2]+L[i-1];
  }
  cout << L[N] << endl;
  return 0;
}
