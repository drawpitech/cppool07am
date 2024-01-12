/*
** EPITECH PROJECT, 2024
** ppool07am
** File description:
** Federation
*/

#include "Federation.hpp"

/* Federation::Ship */
Federation::Ship::Ship(int length, int width, std::string name)
    : _length(length), _width(width), _name(std::move(name)) {
    std::cout << "The independent ship " << _name << " just finished its construction.\n"
              << "It is " << _length << " m in length and " << _width << " m in width.\n";
}

void Federation::Ship::setupCore(WarpSystem::Core *core) {
    _core = core;
    this->displayInfo("The core is set.");
}

void Federation::Ship::checkCore() {
    std::string stability = _core->checkReactor()->isStable() ? "stable" : "unstable";
    this->displayInfo("The core is " + stability + " at the time.");
}

/* Federation::Starfleet::Ship */
Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
    : _length(length), _width(width), _name(std::move(name)), _maxWarp(maxWarp) {
    std::cout << "The ship USS " << _name << " has been finished.\n"
              << "It is " << _length << " m in length and " << _width << " m in width.\n"
              << "It can go to Warp " << _maxWarp << "!\n";
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core) {
    _core = core;
    this->displayInfo("The core is set.");
}

void Federation::Starfleet::Ship::checkCore() {
    std::string stability = _core->checkReactor()->isStable() ? "stable" : "unstable";
    this->displayInfo("The core is " + stability + " at the time.");
}
