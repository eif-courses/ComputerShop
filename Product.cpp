//
// Created by Marius on 2/4/2021.
//

#include "Product.h"

Product::Product(string t, string d, double p) {
  title = t;
  description = d;
  price = p;
}
double Product::getPrice() {
  return price;
}
string Product::getDescription() {
  return description;
}
string Product::getTitle() {
  return title;
}