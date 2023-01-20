#pragma once

#include <iostream>
#include "BLOXFRUITS_player.h"

void profile(Player player) {
    std::cout << player.P_name << "\n";
    std::cout << "$" << player.P_money << "\n";
    std::cout << "B$" << player.P_bounty << "\n";
    std::cout << "Sea " << player.P_sea << "\n";
}