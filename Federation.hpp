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
#include <utility>

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

} // namespace Federation

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
    explicit Ship(int length, int width, std::string name, short maxWarp);

    void setupCore(WarpSystem::Core *core);
    void checkCore();
    void promote(Captain *captain);

  private:
    int _length;
    int _width;
    std::string _name;
    short _maxWarp;
    WarpSystem::Core *_core = nullptr;
    Captain *_captain = nullptr;

    void displayInfo(const std::string &str) const { std::cout << "USS " << _name << ": " << str << "\n"; }
};

class Ensign {
  public:
    explicit Ensign(std::string name) : _name(std::move(name)) {
        std::cout << "Ensign " << _name << ", awaiting orders.\n";
    }

  private:
    std ::string _name;
};
} // namespace Federation::Starfleet

#endif /* PPOOL07AM_FEDERATION_HPP */
