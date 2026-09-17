#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  cout << "Sum -> " << a << " + " << b << " = " << a + b << endl
       << "Sub -> " << a << " - " << b << " = " << a - b << endl
       << "Mul -> " << a << " * " << b << " = " << a * b << endl
       << "Div -> " << a << " / " << b << " = " << fixed << setprecision(2) << (float)a / b;

  return 0;
}
