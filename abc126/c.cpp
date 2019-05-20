#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long int gcd(long long int a, long long int b)
{
  return b ? gcd(b, a%b) : a;
}

long long int lcm(long long int a, long long int b)
{
  return a * b / gcd(a, b);
}

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> div(N);

  for(int i=1; i<=N; ++i)
  {
    int n = 0;
    for(int score=i; score<K; score=score*2)
    {
      ++n;
    }
    div[i] = N * pow(2,n);
  }

  long long int c_div = div[1];
  for(int i=1; i<=N; ++i)
  {
    c_div = lcm(c_div, div[i]);
  }

  int num = 0;
  for(int i=1; i<=N; ++i)
  {
    num += c_div/div[i];
  }
  printf("%.12f\n", (double)num/(double)c_div);
  return 0;
}
