//
// Created by Marius on 2/8/2021.
//

#include "ShoppingCart.h"

void ShoppingCart::add(Product p) {
  cart.emplace_back(p);
}

void ShoppingCart::remove(Product p) {
  cart.erase(cart.begin() + (p.getId() - 1));
}

void ShoppingCart::checkout() {
  double sum = 0;

  for (auto item: cart) {
    sum += (item.getPrice() * item.getQuantity());
  }
  cout << "Sekmingai apmokejote!!! " << "viso uz pirkinius: " << sum << " eur." << endl;

}

void ShoppingCart::display() {
  cout <<"==========================SHOPPING CART ITEMS=================================="<<endl;
  for (auto item: cart) {
    cout << "Title: " << item.getTitle() << ", description:" << item.getDescription()  << ", price: " << item.getPrice() << endl;
  }
}
