//
// Created by Marius on 2/4/2021.
//

#include "Product.h"

int Product::index = 0;

double Product::getPrice() {
  return price;
}
string Product::getDescription() {
  return description;
}
string Product::getTitle() {
  return title;
}

int Product::getId() {
  return id;
}

int Product::getQuantity() {
  return quantity;
}

void Product::setQuantity(int value) {
  Product::quantity = value;
}

int Product::getIndex() {
  return id;
}

void Product::setIndex(int i) {
  id = i;
}

Product::Product(const string &title, const string &description, double price) : title(title), description(description),
price(price) {
  index++;
  setIndex(index);
  quantity = 1;
}
