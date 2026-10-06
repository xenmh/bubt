#include <bits/stdc++.h>
using namespace std;

void grade(string sub, int marks)
{
  string grd = "F";

  if (marks <= 100 && marks >= 80)
    grd = "A+";
  else if (marks <= 79 && marks >= 75)
    grd = "A";
  else if (marks <= 74 && marks >= 70)
    grd = "A-";
  else if (marks <= 69 && marks >= 65)
    grd = "B";
  else if (marks <= 60 && marks >= 64)
    grd = "B-";
  else if (marks <= 59 && marks >= 50)
    grd = "C";

  cout << "Your " << sub << " grade is: " << grd << endl;
}

int main()
{
  string name;
  int ID;
  float ENG, MAT, PHY;

  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your student ID: ";
  cin >> ID;
  cout << "Enter your marks of English: ";
  cin >> ENG;
  cout << "Enter your marks of Math: ";
  cin >> MAT;
  cout << "Enter your marks of Physics: ";
  cin >> PHY;

  float total = ENG + MAT + PHY, avg = total / 3;

  cout << "Student Name: " << name << ", and ID: " << ID << endl
       << "Total Marks: " << total << ", and Average: " << fixed << setprecision(2) << avg << endl;

  grade("English", ENG), grade("Math", MAT), grade("Physics", PHY);

  return 0;
}
