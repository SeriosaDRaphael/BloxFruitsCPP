#pragma once

#include <iostream>

class Player {
    public:
        std::string P_name;
        int P_money;
        int P_bounty;
        bool P_has_sword;
        std::string P_sword;
        bool P_has_gun;
        std::string P_gun;
        int P_sea = 1;
        bool P_has_fruit_light;
        bool P_has_fruit_equipped=false;
        std::string P_fruit_equipped;
        bool P_has_fruit_buddha;
        bool P_has_fighting_style;
        std::string P_fighting_style;
        std::string P_current_island = "Starter Island";
        bool P_has_fruit_flame;
        Player(std::string name, int money, int bounty) {
            P_name = name;
            P_money = money;
            P_bounty = bounty;
        }
};