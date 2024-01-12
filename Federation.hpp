/*
** EPITECH PROJECT, 2024
** ppool07am
** File description:
** Federation
*/

#pragma once

#include <iostream>
#include <string>
#include <utility>

#include "Destination.hpp"
#include "WarpSystem.hpp"

namespace Federation {
class Ship {
   public:
    explicit Ship(int length, int width, std::string name);

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
    int _length;
    int _width;
    std::string _name;
    short _maxWarp = 0;
    WarpSystem::Core *_core = nullptr;
    Destination _home = VULCAN;
    Destination _location = _home;

    bool canMove(Destination d) const {
        return d != _location && _core->checkReactor()->isStable();
    }
    bool canMove(int warp, Destination d) const {
        return warp <= _maxWarp && canMove(d);
    }
    void displayInfo(const std::string &str) const {
        std::cout << _name << ": " << str << "\n";
    }
};

}  // namespace Federation

namespace Federation::Starfleet {
class Captain {
   public:
    Captain(std::string name) : _name(std::move(name)) {}

    std::string getName() const { return _name; }
    int getAge() const { return _age; }
    void setAge(int age) { _age = age; }

   private:
    std::string _name;
    int _age = 0;
};

class Ship {
   public:
    explicit Ship(
        int length, int width, std::string name, short maxWarp,
        int torpedo = 0);

    void setupCore(WarpSystem::Core *core);
    void checkCore();
    void promote(Captain *captain);
    int getShield() const { return _shield; }
    void setShield(int shield) { _shield = shield; }
    int getTorpedo() const { return _photonTorpedo; }
    void setTorpedo(int torpedo) { _photonTorpedo = torpedo; }
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
    int _length;
    int _width;
    std::string _name;
    short _maxWarp;
    WarpSystem::Core *_core = nullptr;
    Captain *_captain = nullptr;
    int _shield = 100;
    int _photonTorpedo;
    Destination _home = EARTH;
    Destination _location = _home;

    bool canMove(Destination d) const {
        return d != _location && _core->checkReactor()->isStable();
    }
    bool canMove(int warp, Destination d) const {
        return warp <= _maxWarp && canMove(d);
    }
    void displayInfo(const std::string &str) const {
        std::cout << "USS " << _name << ": " << str << "\n";
    }
};

class Ensign {
   public:
    explicit Ensign(std::string name) : _name(std::move(name)) {
        std::cout << "Ensign " << _name << ", awaiting orders.\n";
    }

   private:
    std ::string _name;
};
}  // namespace Federation::Starfleet
