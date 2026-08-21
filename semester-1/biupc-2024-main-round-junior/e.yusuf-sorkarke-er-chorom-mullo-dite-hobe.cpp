#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
  int n;
  cin >> n;

  ll h[n];

  for (int i = 0; i < n; i++)
  {
    cin >> h[i];
  }

  int q;
  cin >> q;

  while (q--)
  {
    ll l, s, p, cnt = 0;
    cin >> l >> s >> p;

    for (ll x : h)
    {
      if (x >= l)
      {
        cnt++;
      }
    }

    s -= cnt * p;

    s > 0 ? cout << "Apaa Nai :(\n" : cout << "Apaa Ache :)\n";
  }

  return 0;
}
