#include <bits/stdc++.h>
using namespace std;

class Book
{
private:
  string title, author;
  int publicationYear;

public:
  Book()
  {
    title = "Unknown", author = "Unknown", publicationYear = 0;
  }

  ~Book()
  {
    cout << "Book '" << title << "' has been destroyed.\n";
  }

  void setInfo(string t, string a, int p)
  {
    title = t, author = a;

    if (0 < p && p <= 2026)
      publicationYear = p;
    else
      cout << "The publication year can't be negative or in future!\n";
  }

  void display()
  {
    cout << "Book Details: " << endl
         << "Title: " << title << endl
         << "Author: " << author << endl
         << "Publication Year: " << publicationYear << endl
         << endl;
  }
};

int main()
{
  Book b1;
  b1.setInfo("Atomic Habits", "James Clear", 1999); // Valid Publication Year
  b1.display();

  Book b2, b3;
  b2.display();
  b3.display();

  return 0;
}
