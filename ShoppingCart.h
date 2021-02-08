//
// Created by Marius on 2/8/2021.
//

#ifndef COMPUTERSHOP_SHOPPINGCART_H
#define COMPUTERSHOP_SHOPPINGCART_H

#include <iostream>
#include <vector>
#include "Product.h"

using namespace std;

class ShoppingCart {
private:
  vector<Product> cart;
public:
  void add(Product p);
  void remove(Product p);
  void display();
  void checkout();
};


#endif //COMPUTERSHOP_SHOPPINGCART_H
