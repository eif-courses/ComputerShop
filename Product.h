//
// Created by Marius on 2/4/2021.
//

#ifndef COMPUTERSHOP_PRODUCT_H
#define COMPUTERSHOP_PRODUCT_H

#include <string>
#include <iostream>

using namespace std;

class Product {
public:
  Product(string t, string d, double p);
  string getTitle();
  string getDescription();
  double getPrice();
private:
  string title;
  string description;
  double price;
};


#endif //COMPUTERSHOP_PRODUCT_H
