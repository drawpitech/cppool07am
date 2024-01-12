/*
** EPITECH PROJECT, 2024
** ppool07am
** File description:
** Federation
*/

#ifndef PPOOL07AM_FEDERATION_HPP
#define PPOOL07AM_FEDERATION_HPP

#include <iostream>
#include <string>

#include "WarpSystem.hpp"

namespace Federation {
class Ship {
  public:
    explicit Ship(int length, int width, std::string name);

    void setupCore(WarpSystem::Core *core);
    void checkCore();

  private:
    int _length;
    int _width;
    std::string _name;
    short _maxWarp = 0;
    WarpSystem::Core *_core = nullptr;

    void displayInfo(const std::string &str) const { std::cout << _name << ": " << str << "\n"; }
};

namespace Starfleet {
class Ship {
  public:
    explicit Ship(int length, int width, std::string name, short maxWarp);

    void setupCore(WarpSystem::Core *core);
    void checkCore();

  private:
    int _length;
    int _width;
    std::string _name;
    short _maxWarp;
    WarpSystem::Core *_core = nullptr;

    void displayInfo(const std::string &str) const { std::cout << "USS " << _name << ": " << str << "\n"; }
};
} // namespace Starfleet

} // namespace Federation

#endif /* PPOOL07AM_FEDERATION_HPP */
