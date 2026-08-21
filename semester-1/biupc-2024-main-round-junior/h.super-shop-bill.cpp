#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  double total_bill = 0;

  while (n--)
  {
    char c;
    double p, q;
    cin >> c >> p >> q;

    double bill = p * q, service_charge = bill * 0.05, tax = 0;

    if (c == 'F')
    {
      tax = bill * 0.10;
    }
    else if (c == 'O')
    {
      tax = bill * 0.075;
    }

    total_bill += bill + service_charge + tax;
  }

  cout << fixed << setprecision(2) << total_bill;

  return 0;
}
