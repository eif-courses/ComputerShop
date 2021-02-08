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
  static int index;

  Product(const string &title, const string &description, double price);

  string getTitle();
  string getDescription();
  double getPrice();
  int getId();
  int getQuantity();
  void setQuantity(int value);
  int getIndex();
  void setIndex(int i);


private:
  string title;
  string description;
  double price;
  int id;
  int quantity;
};






#endif //COMPUTERSHOP_PRODUCT_H
