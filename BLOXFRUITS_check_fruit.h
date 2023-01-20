#pragma once

#include <iostream>
#include "BLOXFRUITS_fruit.h"

Fruit light_fruit("Light Fruit", 650000, false);
Fruit buddha_fruit("Buddha Fruit", 1200000, false);
Fruit flame_fruit("Flame Fruit", 250000, false);

void check_fruit(Player player) {
    if(player.P_has_fruit_light == true) {
        std::cout << "\e[1mFruit: \033[1;33m<" << light_fruit.F_name << ">\033[1;0m\e[0m\033[1;32m <$" << "\e[1m\033[1;32m" << light_fruit.F_price << ">\033[1;0m\e[1;0m\n";    
    } else if(player.P_has_fruit_light == false) {
        std::cout << "Light Fruit: X\n";
    }
    if(player.P_has_fruit_buddha == true) {
        std::cout << "\e[1mFruit: \033[1;33m<" << buddha_fruit.F_name << ">\033[1;0m\e[0m\033[1;32m <$" << "\e[1m\033[1;32m" << buddha_fruit.F_price << ">\033[1;0m\e[1;0m\n"; 
    }
    if(player.P_has_fruit_flame == true) {
        std::cout << "\e[1mFruit: \033[1;33m<" << flame_fruit.F_name << ">\033[1;0m\e[0m\033[1;32m <$" << "\e[1m\033[1;32m" << flame_fruit.F_price << ">\033[1;0m\e[1;0m\n"; 
    }
}

