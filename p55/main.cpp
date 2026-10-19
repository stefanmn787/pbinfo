#include <iostream>

using namespace std;

int main()
{
  int n, mini = 1000001;
  bool ok = 0;
  cin >> n;

  while(n != 0)
  {
    if(n < mini && n > 0)
        mini = n, ok = 1;
    cin >> n;
  }
  if( ok )
    cout << mini;
  else
    cout << "NU EXISTA";
  return 0;
}
