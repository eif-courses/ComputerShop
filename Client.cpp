//
// Created by Marius on 2/8/2021.
//

#include "Client.h"

void Client::viewCart() {
  cart.display();
}

void Client::addToCart(Product p) {
  cart.add(p);
}

void Client::buyout() {
  cart.checkout();
}

Client::Client(const string &name) : name(name) {}
