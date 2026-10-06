#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  string name, department;
  int age;
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

  cout << "Name: " << Samiha.name << ", Age: " << Samiha.age << ", Department: " << Samiha.department << endl
       << "Name: " << Ramisa.name << ", Age: " << Ramisa.age << ", Department: " << Ramisa.department << endl
       << "Name: " << Karim.name << ", Age: " << Karim.age << ", Department: " << Karim.department << endl
       << "Name: " << John.name << ", Age: " << John.age << ", Department: " << John.department << endl;

  return 0;
}
