#pragma once

#include <iostream>

class Fruit {
    public:
        std::string F_name;
        int F_price;
        bool F_has_fruit;
        Fruit(std::string name, int price, bool has_fruit) {
            F_name = name;
            F_price = price;
        }
};