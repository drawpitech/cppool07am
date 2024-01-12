/*
** EPITECH PROJECT, 2024
** ppool07am
** File description:
** Federation
*/

#ifndef PPOOL07AM_BORG_HPP
#define PPOOL07AM_BORG_HPP

#include <iostream>

#include "WarpSystem.hpp"

namespace Borg {
class Ship {
   public:
    explicit Ship();

    void setupCore(WarpSystem::Core *core);
    void checkCore();

   private:
    int _side = 300;
    short _maxWarp = 9;
    WarpSystem::Core *_core = nullptr;

    static void displayInfo(const std::string &str) {
        std::cout << str << "\n";
    }
};
}  // namespace Borg

#endif /* PPOOL07AM_BORG_HPP */
