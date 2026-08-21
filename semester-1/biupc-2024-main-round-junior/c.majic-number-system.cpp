#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n;
  cin >> n;

  string s;

  while (n > 0)
  {
    n % 2 ? s.push_back('7') : s.push_back('0');
    n /= 2;
  }

  reverse(s.begin(), s.end());

  cout << s;

  return 0;
}
