#pragma once
#include <iostream>
#include "BLOXFRUITS_player.h"

class Loadout {
    public:
        void loadout(Player player) {
            if(player.P_has_sword == true) {
                std::cout << player.P_sword << "\n";
            }
            if(player.P_has_fruit_equipped == true) {
                std::cout << player.P_fruit_equipped << "\n";
            }
            if(player.P_has_gun == true) {
                std::cout << player.P_gun << "\n";
            }
            if(player.P_has_fighting_style == true) {
                std::cout << player.P_fighting_style << "\n";
            }
        }
};