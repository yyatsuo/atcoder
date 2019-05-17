#include <iostream>
using namespace std;

int main()
{
  int N;
  int C[50], V[50];
  cin >> N;
  for(int i=0; i<N; ++i) { cin >> V[i]; }
  for(int i=0; i<N; ++i) { cin >> C[i]; }

  int X=0, Y=0;
  for(int i=0; i<N; ++i)
  {
    if(V[i] > C[i])
    {
      X += V[i];
      Y += C[i];
    }
  }
  cout << X-Y << endl;
  return 0;
}
