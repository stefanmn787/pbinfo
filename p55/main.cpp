#include <iostream>

using namespace std;

int main()
{
  int n,min;
  cin >>n;
  if(n==0)
  {
      cout << "NU EXISTA";
  }
  else
  {
      while(n!=0)
      {
          cin >> n;
          if(n<min)
            min=n;
      }
  }
  cout << min;
    return 0;
}
