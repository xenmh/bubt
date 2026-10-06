#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  string name, department;
  int age;

  void displayInfo()
  {
    cout << "Name: " << name << ", Age: " << age << ", Department: " << department << endl;
  }

  void setData(string n, int a, string d)
  {
    name = n, age = a, department = d;
  }
};

int main()
{
  Student Samiha, Ramisa, Karim, John;

  Samiha.setData("Samiha Smrity", 19, "EEE");
  Ramisa.setData("Ramisa Jannat", 23, "CSE");
  Karim.setData("Karim Uddin", 31, "LAW");
  John.setData("John Doe", 26, "BBA");

  Samiha.displayInfo(), Ramisa.displayInfo(), Karim.displayInfo(), John.displayInfo();

  return 0;
}
