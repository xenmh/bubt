#include <bits/stdc++.h>
using namespace std;

class Point
{
private:
  int x, y;

public:
  Point(int a, int b)
  {
    x = a, y = b;
  }

  Point(const Point &obj)
  {
    x = obj.x, y = obj.y;
  }

  int getX()
  {
    return x;
  }

  int getY()
  {
    return y;
  }
};

int main()
{
  Point p1(10, 20); // Using Default Constructor
  Point p2(p1);     // Using Copy Constructor

  cout << "Object 1:\n"
       << "X = " << p1.getX() << " and Y = " << p1.getY() << endl
       << "Point 2:\n"
       << "X = " << p2.getX() << " and Y = " << p2.getY() << endl;

  return 0;
}
