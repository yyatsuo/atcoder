#include <bits/stdc++.h>
using namespace std;
int f(int n) { return (n*(n-1))/2; }
int main() {
  int N, M; cin >> N >> M;
  cout << f(N) + f(M) << endl;
}

