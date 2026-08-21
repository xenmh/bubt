#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int mn, mx;

  if (a >= b)
  {
    mx = a, mn = b;
  }
  else
  {
    mx = b, mn = a;
  }

  if (mx % mn)
  {
    cout << "No Multiples";
  }
  else
  {
    cout << "Multiples";
  }

  return 0;
}
