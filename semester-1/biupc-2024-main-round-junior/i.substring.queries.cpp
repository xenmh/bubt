#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  int q;
  cin >> s >> q;

  while (q--)
  {
    int l, r, k;
    cin >> l >> r >> k;

    l--, r--;

    vector<int> v;
    int ln = r - l + 1;
    string sub_str = s.substr(l, ln);

    for (int i = 0; i < s.size(); i++)
    {
      if (sub_str == s.substr(i, ln))
      {
        v.push_back(i + 1);
      }
    }

    v.size() >= k ? cout << v[k - 1] << '\n' : cout << -1 << '\n';
  }

  return 0;
}
