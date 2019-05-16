#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// 約数見つけるやつ
vector<long long int> get_divs(long long int n)
{
  vector<long long int> ret;
  for(long long int i=1; i*i<=n; ++i)
  {
    if(n%i == 0)
    {
      ret.push_back(i);
      if(i!=1 && i*i!=n)
      {
        ret.push_back(n/i);
      }
    }
  }
  return ret;
}

int main()
{
  long long int N, ans=0;
  cin >> N;
  vector<long long int> divs = get_divs(N);
  for(long long int m:divs)
  {
    cout << m << endl;
    N/
    ans += m;
  }
  cout << ans << endl;
  return 0;
}
