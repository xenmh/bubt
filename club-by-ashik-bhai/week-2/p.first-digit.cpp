#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a;
  cin >> a;

  a /= 1000;

  a % 2 ? cout << "ODD" : cout << "EVEN";

  return 0;
}
