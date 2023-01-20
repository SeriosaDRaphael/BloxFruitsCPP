#pragma once

#include <iostream>
#include "BLOXFRUITS_player.h"

class StarterIsland {
    public:
        bool has_enemies=false;
        std::string npc1="Boat Seller";
        std::string npc2="Fruit Dealer";
};
 
StarterIsland si;

class Island {
    public:
        void info_about_island(Player player) {
            std::cout << player.P_current_island << " has:\n";
            std::cout << si.npc1 << "\n";
            std::cout << si.npc2 << "\n";

        }
        void enemies_on_island(Player player) {
            if(player.P_current_island == "Starter Island") {
                std::cout << "are there enemies in this island: " << si.has_enemies << "\n";
            }
        }
};