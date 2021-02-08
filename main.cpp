#include <iostream>
#include "Product.h"
#include "Shop.h"
#include "ShoppingCart.h"
#include "Client.h"

using namespace std;



int main() {

  Product msi("MSI GE72", "Creator laptop", 2003.55);
  Product Samsung("S21 Galaxy", "Shiny phone", 1305.45);

//  cout << "ID:" << msi.getId() << endl;
//  cout << "ID:" << Samsung.getId() << endl;

  Shop online("Online 2");
  online.add(msi);




  Client tom("Tom");
  tom.addToCart(msi);
  tom.addToCart(Samsung);
  tom.viewCart();









//  ShoppingCart cart;
//
//
//
//
//  cart.add(msi);
//  Samsung.setQuantity(3);
//  cart.add(Samsung);
//
//  cart.display();
//  cout << "-----------------TOTAL PRICE-------------------------"<<endl;
//  cart.checkout();
//
//





//  online.display();
//
//
//
//
//  string title, description;
//  double price;
//
//  cout << "Iveskite pavadinima:"<<endl;
//  getline(cin, title);
//  cout << "Iveskite aprasyma:"<<endl;
//  getline(cin, description);
//  cout << "Nurodykite kaina: "<<endl;
//  cin >> price;
//
//  Product product(title, description, price);
//  online.add(product);
//
//
//  online.display();





  return 0;
}


