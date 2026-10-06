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
};

int main()
{
  Student Samiha, Ramisa, Karim, John;

  Samiha.name = "Samiha Smrity";
  Samiha.age = 19;
  Samiha.department = "EEE";

  Ramisa.name = "Ramisa Jannat";
  Ramisa.age = 23;
  Ramisa.department = "CSE";

  Karim.name = "Karim Uddin";
  Karim.age = 31;
  Karim.department = "LAW";

  John.name = "John Doe";
  John.age = 26;
  John.department = "BBA";

  Samiha.displayInfo(), Ramisa.displayInfo(), Karim.displayInfo(), John.displayInfo();

  return 0;
}
