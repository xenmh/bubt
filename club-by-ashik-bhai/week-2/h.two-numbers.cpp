#include <bits/stdc++.h>

using namespace std;

int main()
{
  float a, b;
  cin >> a >> b;

  cout << "floor " << a << " / " << b << " = " << floor(a / b) << "\nceil " << a << " / " << b << " = " << ceil(a / b) << "\nround " << a << " / " << b << " = " << round(a / b);

  return 0;
}
