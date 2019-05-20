#include <iostream>
using namespace std;

const int BTC = 380000.0;
int main()
{
  int N;
  float x, yen=0, btc=0;
  string u;
  cin >> N;
  for(int i=0;i<N;++i)
  {
    cin >> x >> u;
    if(u=="BTC")
      btc+=x;
    if(u=="JPY")
      yen+=x;
  }
  cout << yen+btc*BTC << endl;
  return 0;
}
