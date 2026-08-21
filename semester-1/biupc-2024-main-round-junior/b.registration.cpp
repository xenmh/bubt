#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, cnt = 0;
  cin >> n;

  while (n--)
  {
    int a;
    cin >> a;

    if (!a)
    {
      cnt++;
    }
  }

  cout << cnt;

  return 0;
}
