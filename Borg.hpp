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
#include "Destination.hpp"

namespace Borg {
class Ship {
   public:
    explicit Ship();

    void setupCore(WarpSystem::Core *core);
    void checkCore();
    bool move(int warp, Destination d) {
        if (!canMove(warp, d))
            return false;
        _location = d;
        return true;
    }
    bool move(int warp) { return move(warp, _location); }
    bool move(Destination d) {
        if (!canMove(d))
            return false;
        _location = d;
        return true;
    }
    bool move() { return move(_home); }

   private:
    int _side = 300;
    short _maxWarp = 9;
    WarpSystem::Core *_core = nullptr;
    Destination _home = UNICOMPLEX;
    Destination _location = _home;

    static void displayInfo(const std::string &str) {
        std::cout << str << "\n";
    }
    bool canMove(Destination d) const {
        return d != _location && _core->checkReactor()->isStable();
    }
    bool canMove(int warp, Destination d) const {
        return warp <= _maxWarp && canMove(d);
    }
};
}  // namespace Borg

#endif /* PPOOL07AM_BORG_HPP */
