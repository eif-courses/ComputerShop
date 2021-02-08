//
// Created by Marius on 2/4/2021.
//

#ifndef COMPUTERSHOP_SHOP_H
#define COMPUTERSHOP_SHOP_H
#include "Product.h"
#include "Contact.h"
#include <iostream>
#include <vector>
using namespace std;

class Shop {
public:
  Shop(const string &name);
  Shop(const string &name, const Contact &contact);
  Shop(const string &name, const Contact &contact, const vector<Product> &products);

  const string &GetName() const;
  const Contact &GetContact() const;
  const vector<Product> &GetProducts() const;

  void add(Product product);
  void display();



private:
  string name;
  Contact contact;
  vector<Product> products;
};


#endif //COMPUTERSHOP_SHOP_H
