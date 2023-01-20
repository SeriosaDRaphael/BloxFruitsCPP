#pragma once
#include "BLOXFRUITS_player.h"

class Race {
    public:
        std::string v1 = "Race V1";
        int v1_price = 0;
        std::string v2 = "Race V2";
        int v2_price = 500000;
        std::string v3 = "Race V3";
        int v3_price = 2000000;
};

void buyRaceV2() {
    Race race;
    std::cout << "\e[1mSuccessfully bought \033[1;33m<" << race.v2 << ">\033[1;0m\e[1m for \033[1;32m<$" << race.v2_price << ">\033[1;0m\e[0m\n"; 
}

void buyRaceV3() {
    Race race;
    std::cout << "\e[1mSuccessfully bought \033[1;33m<" << race.v3 << ">\033[1;0m\e[1m for \033[1;32m<$" << race.v3_price << ">\033[1;0m\e[0m\n"; 
}