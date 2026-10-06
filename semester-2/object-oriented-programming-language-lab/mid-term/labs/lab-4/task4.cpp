#include <bits/stdc++.h>
using namespace std;

class MobilePhone
{
private:
  string brand, model;
  double price;

public:
  MobilePhone(string b, string m, double p)
  {
    brand = b, model = m, price = p;
  }

  MobilePhone(const MobilePhone &mp)
  {
    brand = mp.brand, model = mp.model, price = mp.price;
  }

  void displayInfo()
  {
    cout << "Mobile Phone Information:\n"
         << "Brand: " << brand << endl
         << "Model: " << model << endl
         << "Price: " << fixed << setprecision(2) << price << endl
         << endl;
  }

  void isPremiumPhone()
  {
    if (price > 30000)
      cout << "This is a premium phone.\n";
    else
      cout << "This is a budget phone.\n";
  }
};

int main()
{
  MobilePhone mp1("Samsung", "S26 Ultra", 113999.99); // Using Parameterized Constructor
  MobilePhone mp2(mp1);                               // Using Copy Constructor

  mp1.displayInfo();
  mp2.displayInfo();

  return 0;
}
