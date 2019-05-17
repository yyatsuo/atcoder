#include <iostream>
using namespace std;
int main()
{
  int A, B;
  cin >> A >> B;
  if(A==B)
    cout << "Draw";
  else if(A==1 || (B!=1 && A>B))
    cout << "Alice";
  else
    cout << "Bob";
  cout << endl;
  return 0;
}
