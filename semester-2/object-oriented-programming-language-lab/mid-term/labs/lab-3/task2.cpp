#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  string name;
  int rollNumber;
  float bangla, english, physics;

  float totalMarks()
  {
    return bangla + english + physics;
  }
  float averageMarks()
  {
    return (bangla + english + physics) / 3;
  }
};

int main()
{
  Student s1, s2;
  s1.name = "Stephen Hawking";
  s1.rollNumber = 22;
  s1.bangla = 56;
  s1.english = 73;
  s1.physics = 88;

  s2.name = "Billie Eilish";
  s2.rollNumber = 69;
  s2.bangla = 27;
  s2.english = 91;
  s2.physics = 50;

  cout << "Name: " << s1.name << "\nRoll Number: " << s1.rollNumber << endl
       << "Total Marks: " << fixed << setprecision(2) << s1.totalMarks() << "\nAverage Marks: " << fixed << setprecision(2) << s1.averageMarks() << endl
       << "\nName: " << s2.name << "\nRoll Number: " << s2.rollNumber << endl
       << "Total Marks: " << fixed << setprecision(2) << s2.totalMarks() << "\nAverage Marks: " << fixed << setprecision(2) << s2.averageMarks();

  return 0;
}
