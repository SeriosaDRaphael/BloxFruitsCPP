#pragma once

#include <iostream>
#include "BLOXFRUITS_check_fruit.h"
#include "BLOXFRUITS_profile.h"
#include "BLOXFRUITS_katana.h"
#include "BLOXFRUITS_loadout.h"
#include "BLOXFRUITS_kabucha.h"
#include "BLOXFRUITS_fighting_style.h"
#include "BLOXFRUITS_islands.h"

void buy_fruit();
void buy_eq();
void buy_sword();
void buy_fs();
void defeat_enemies();

void info() {
    std::cout << "\033[1;31mDefeat Enemies: [DE]\033[1;0m\n";
    std::cout << "\033[1;34mDefeat Bosses: [DB]\033[1;0m\n";
    std::cout << "\033[1;31mCheck Fruits: [CF]\033[1;0m\n";
    std::cout << "\033[1;34mProfile: [PR]\033[1;0m\n";
    std::cout << "\033[1;31mBuy Fruits: [BF]\033[1;0m\n";
    std::cout << "\033[1;34mLoadout: [L]\033[1;0m\n";
    std::cout << "\033[1;31mEquipment Shop: [EQS]\033[1;0m\n";
    std::cout << "\033[1;34mBuy Fighting Style: [BFS]\033[1;0m\n";
    std::cout << "\033[1;31mInventory: [I]\033[1;0m\n";
}

Player player("raphael", 100000000, 0);
FightingStyle fs;
Loadout ld;
Island is;

void gameloop() {
    std::string option;
    info();
    do {
        std::cout << "\033[1;35mMainLoop.console >> \033[1;0m";
        std::cin >> option;
        if(option == "de") {
            defeat_enemies();
        }
        if(option == "cf") {
            check_fruit(player);
        }
        if(option == "pr") {
            profile(player);
        }
        if(option == "l") {
            ld.loadout(player);
        }
        if(option == "eqs") {
            buy_eq();
        }
        if(option == "bf") {
            buy_fruit();
        }
        if(option == "bfs") {
            buy_fs();
        }
    } while(option != "q");
}

void buy_fs() {
    std::string fs_option;
    std::cout << "<Dark Step><150,000>: [DRKSTP]\n";
    std::cout << "<Electric><500,000>: [ELCTRC]\n";
    std::cout << "<Water Kung Fu><750,000>: [WTRKNF]\n";
    do {
        std::cout << "\033[1;35mFS.console >> \033[1;0m";
        std::cin >> fs_option;
        if(fs_option == "drkstp") {
            if(player.P_money >= fs._drkstp) {
                player.P_money -= fs._drkstp;
                player.P_has_fighting_style = true;
                fs.dark_step = true;
                player.P_fighting_style = fs.darkstp;
                std::cout << "Successfully bought \033[1;33m<" << fs.darkstp << ">\033[1;0m for \033[1;32m<$" << fs._drkstp << ">\033[1;0m\n";
            } else if(player.P_money < fs._drkstp) {
                std::cout << "Not enough money.\n";
            } 
        }
        if(fs_option == "elctrc") {
            if(player.P_money >= fs._elctrc) {
                player.P_money -= fs._elctrc;
                player.P_has_fighting_style = true;
                fs.electric = true;
                player.P_fighting_style = fs.electrc;
                std::cout << "Successfully bought \033[1;33m<" << fs.electrc << ">\033[1;0m for \033[1;32m<$" << fs._elctrc << ">\033[1;0m\n";
            } else if(player.P_money < fs._elctrc) {
                std::cout << "Not enough money.\n";
            }
        }
    } while(fs_option != "b");
}

void buy_eq() {
    std::string eq_option;
    std::cout << "\033[1;31mGUNS: [G]\033[1;0m\n";
    std::cout << "\033[1;34mFIGHTING STYLES: [FS]\033[1;0m\n";
    std::cout << "\033[1;31mSWORDS: [SW]\033[1;0m\n";
    do {
        std::cout << "\033[1;35mEQS.console >> \033[1;0m";
        std::cin >> eq_option;
        if(eq_option == "g") {
            
        }
        if(eq_option == "sw") {
           buy_sword(); 
        }  
    } while(eq_option != "b");
}

void buy_sword() {
    std::string buy_sword_option;
    std::cout << "\033[1;33m<" << katana.E_name << ">\033[1;0m\033[1;32m<$" << katana.E_price << ">\033[1;0m: [KTN]\n";
    std::cout << "\033[1;33m<" << cutlass.E_name << ">\033[1;0m\033[1;32m<$" << cutlass.E_price << ">\033[1;0m: [CTL]\n";    
    do {
        std::cout << "EQS.SwordShop.console >> ";
        std::cin >> buy_sword_option;
        if(buy_sword_option == "ktn") {
            buyKatana();
        }
        if(buy_sword_option == "ctl") {
            buyCutlass();
        }
    } while(buy_sword_option != "b");
}

void buy_fruit() {
    std::string bf_option;
    std::cout << "Light Fruit: \033[1;32m<$" << light_fruit.F_price << ">\033[1;0m: [LF]\n";
    std::cout << "Buddha Fruit: \033[1;32m<$" << buddha_fruit.F_price << ">\033[1;0m: [BDF]\n";
    std::cout << "Flame Fruit: \033[1;32m<$" << flame_fruit.F_price << ">\033[1;0m: [FF]\n";
    do {
        std::cout << "\033[1;35mBF.console >> \033[1;0m";
        std::cin >> bf_option;
        if(bf_option == "lf") {
            if(player.P_money >= light_fruit.F_price) {
                player.P_money -= light_fruit.F_price;
                player.P_has_fruit_light = true;
                if(player.P_has_fruit_equipped == true) {
                    std::cout << "Fruit added to inventory\n";
                } else if(player.P_has_fruit_equipped == false) {
                    std::cout << "Eaten fruit\n";
                    std::cout << "Fruit Eqquiped";
                    player.P_has_fruit_equipped = true;
                    player.P_fruit_equipped = light_fruit.F_name;
                }
                std::cout << "\e[1mSuccessfully bought \033[1;33m<" << light_fruit.F_name << "\e[1m> \033[1;0m for \033[1;32m<$" << light_fruit.F_price << ">\033[1;0m\n";
            } else if(player.P_money < light_fruit.F_price) {
                std::cout << "Not enough money.\n";
            }
        }
        if(bf_option == "bdf") {
            if(player.P_money >= buddha_fruit.F_price) {
                player.P_money -= buddha_fruit.F_price;
                player.P_has_fruit_buddha = true;
                if(player.P_has_fruit_equipped == true) {
                    std::cout << "Fruit added to inventory\n";
                } else if(player.P_has_fruit_equipped == false) {
                    std::cout << "Eaten fruit\n";
                    std::cout << "Fruit Eqquiped\n";
                    player.P_has_fruit_equipped = true;
                    player.P_fruit_equipped = buddha_fruit.F_name;
                }
                std::cout << "\e[1mSuccessfully bought \033[1;33m<" << buddha_fruit.F_name << "\e[1m> \033[1;0m for \033[1;32m<$" << buddha_fruit.F_price << ">\033[1;0m\n";
            } else if(player.P_money < buddha_fruit.F_price) {
                std::cout << "Not enough money\n";
            }
        }
        if(bf_option == "ff") {
            if(player.P_money >= flame_fruit.F_price) {
                player.P_money -= flame_fruit.F_price;
                player.P_has_fruit_flame = true;
                if(player.P_has_fruit_equipped == true) {
                    std::cout << "Fruit added to inventory\n";
                } else if(player.P_has_fruit_equipped == false) {
                    std::cout << "Eaten fruit\n";
                    std::cout << "Fruit Eqquiped\n";
                    player.P_has_fruit_equipped = true;
                    player.P_fruit_equipped = flame_fruit.F_name;
                }
            } else if(player.P_money < flame_fruit.F_price) {
                std::cout << "not enough money\n";
            }
        }
    } while(bf_option != "b");
}

void buyKatana() {
    if(player.P_money >= katana.E_price) {
        player.P_money -= katana.E_price;
        std::cout << "\e[1mSuccessfully bought \033[1;33m<" << katana.E_name << ">\033[1;0m\e[1m for \033[1;32m<$" << katana.E_price << ">\033[1;0m\e[0m\n";
        player.P_has_sword = true;
        player.P_sword = katana.E_name;
    }
}

void buyCutlass() {
    if(player.P_money >= cutlass.E_price) {
        player.P_money -= katana.E_price;
        std::cout << "\e[1mSuccessfully bought \033[1;33m<" << cutlass.E_name << ">\033[1;0m\e[1m for \033[1;32m<$" << cutlass.E_price << ">\033[1;0m\e[0m\n";
        player.P_has_sword = true;
        player.P_sword = cutlass.E_name;
    }
}

void buyKabucha() {
    if(player.P_money >= kabucha.E_price) {
        if(player.P_sea == 2) { 
            player.P_money -= kabucha.E_price;
            std::cout << "\e[1mSuccessfully bought \033[1;33m<" << kabucha.E_name << ">\033[1;0m\e[1m for \033[1;32m<$" << kabucha.E_price << ">\033[1;0m\e[0m\n";
            player.P_has_gun = true;
            player.P_gun = kabucha.E_name;
        } else if(player.P_sea == 1) {
            std::cout << "You need to unlock second sea first.\n";
        }
    }
}

void defeat_enemies() {
    std::string de_option;
    std::cout << "Current Location: [CRL]\n";
    std::cout << "Island Info: [ISL]\n";
    std::cout << "Enemies On Island: [EOI]\n";
    do {
        std::cout << "\033[1;35mDE.console >> \033[1;0m";
        std::cin >> de_option;
        if(de_option == "crl") {
            std::cout << "you are on " << player.P_current_island << "\n";
        }
        if(de_option == "isl") {
            is.info_about_island(player);
        }
        if(de_option == "eoi") {
            is.enemies_on_island(player);
        }
    } while(de_option != "b");
}