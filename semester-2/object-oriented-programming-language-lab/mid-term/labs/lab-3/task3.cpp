#include <bits/stdc++.h>
using namespace std;

float PI = 3.1416;

class Circle
{
private:
  float radius;

public:
  float area(float r)
  {
    radius = r;
    return PI * radius * radius;
  }
  float circumference(float r)
  {
    radius = r;
    return 2 * PI * radius;
  }
};

int main()
{
  Circle circle;

  cout << "Radius: " << fixed << setprecision(2) << circle.area(11.11) << endl
       << "Circumference: " << fixed << setprecision(2) << circle.circumference(11.11);

  return 0;
}
