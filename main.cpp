#include <iostream>
#include "Product.h"
#include "Shop.h"

using namespace std;



int main() {

  Product msi("MSI GE72", "Creator laptop", 2003.55);
  Shop online("Online 2");
  online.add(msi);

  online.display();




  string title, description;
  double price;

  cout << "Iveskite pavadinima:"<<endl;
  getline(cin, title);
  cout << "Iveskite aprasyma:"<<endl;
  getline(cin, description);
  cout << "Nurodykite kaina: "<<endl;
  cin >> price;

  Product product(title, description, price);
  online.add(product);


  online.display();





  return 0;
}


