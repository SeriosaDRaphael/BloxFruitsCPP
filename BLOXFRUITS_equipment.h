#pragma once

#include <iostream>

class Equipment {
    public:
        std::string E_name;
        int E_price;
        int E_damage;
        Equipment(std::string name="eq", int price=0, int damage=0) {
            E_name = name;
            E_price = price;
            E_damage = damage;
        }
};