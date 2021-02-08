cmake_minimum_required(VERSION 3.17)
project(ComputerShop)

set(CMAKE_CXX_STANDARD 14)

add_executable(ComputerShop main.cpp Product.cpp Product.h Shop.cpp Shop.h Contact.cpp Contact.h Client.cpp Client.h ShoppingCart.cpp ShoppingCart.h)