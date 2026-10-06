#include <bits/stdc++.h>

using namespace std;

class Rectangle
{
private:
  float length, width;

public:
  float area(float l, float w)
  {
    length = l, width = w;
    return length * width;
  }

  float perimeter(float l, float w)
  {
    length = l, width = w;
    return 2 * (length + width);
  }
};

int main()
{
  Rectangle obj;

  cout << "Area: " << fixed << setprecision(2) << obj.area(20.5, 10.9) << endl
       << "Perimeter: " << fixed << setprecision(2) << obj.perimeter(20.5, 10.9);

  return 0;
}
