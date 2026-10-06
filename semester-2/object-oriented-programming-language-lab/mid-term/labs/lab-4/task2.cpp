#include <bits/stdc++.h>
using namespace std;

class Product
{
private:
  string productName;
  int productID;
  double price;

public:
  Product()
  {
    productName = "Unnamed", productID = 0, price = 0.0;
  }

  Product(string pName, int pID, double p)
  {
    productName = pName, productID = pID, price = p;
  }

  void displayDetails()
  {
    cout << "Product Details:" << endl
         << "Product Name: " << productName << endl
         << "Product ID: " << productID << endl
         << "Price: " << fixed << setprecision(2) << price << endl
         << endl;
  }

  ~Product()
  {
    cout << "Product with ID '" << productID << "' has been destroyed!\n";
  }
};

int main()
{
  cout << "Using Default Constructor\n";
  Product p1;
  p1.displayDetails();

  cout << "Using Parameterized Constructor\n";
  Product p2("Mac Mini M4", 222222, 118499.99);
  p2.displayDetails();

  return 0;
}
