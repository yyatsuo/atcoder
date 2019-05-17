#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int M, N;
  cin >> N >> M;
  vector<pair<long long, long long>> d(N);
  for(int i=0; i<N; ++i) cin >> d[i].first >> d[i].second;
  sort(d.begin(), d.end());

  long long cost=0;
  int amount=0;
  for(auto drink:d)
  {
    if(drink.second <= M)
    {
      M -= drink.second;
      cost += drink.first*drink.second;
    }
    else
    {
      cost += drink.first*M;
      break;
    }
  }
  cout << cost << endl;
  return 0;
}
