#pragma once
#include <iostream>

class FightingStyle {
    public:
        bool dark_step = false;
        bool electric = false;
        bool water_kung_fu = false;
        bool dragon_breath = false;
        bool superhuman = false;
        bool death_step = false;
        bool eclaw = false;
        bool sharkman_karate = false;
        bool dragon_talon = false;
        bool godhuman = false;

        //price
        int _drkstp = 150000;
        int _elctrc = 500000;
        int _wtrknf = 750000;

        //name
        std::string darkstp = "Dark Step";
        std::string electrc = "Electric";
        std::string waterkungf = "Water Kung Fu";
};