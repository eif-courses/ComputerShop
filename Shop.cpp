//
// Created by Marius on 2/4/2021.
//

#include "Shop.h"

Shop::Shop(const string &name) : name(name) {}

Shop::Shop(const string &name, const Contact &contact, const vector<Product> &products) : name(name), contact(contact),
                                                                                          products(products) {}
Shop::Shop(const string &name, const Contact &contact) : name(name), contact(contact) {}

const string &Shop::GetName() const {
  return name;
}

const Contact &Shop::GetContact() const {
  return contact;
}

const vector<Product> &Shop::GetProducts() const {
  return products;
}

void Shop::add(Product product) {
  products.emplace_back(product);
}

void Shop::display() {
  for(Product p: products){
    cout << p.getTitle() <<", " << p.getDescription() <<", "  << p.getPrice() << endl;
  }
}
