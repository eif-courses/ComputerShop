//
// Created by Marius on 2/8/2021.
//

#ifndef COMPUTERSHOP_CLIENT_H
#define COMPUTERSHOP_CLIENT_H


#include "ShoppingCart.h"

class Client {

public:
  Client(const string &name);

  void viewCart();
  void addToCart(Product p);
  void buyout();

private:
  string name;
  ShoppingCart cart;
};


#endif //COMPUTERSHOP_CLIENT_H
