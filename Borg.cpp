/*
** EPITECH PROJECT, 2024
** ppool07am
** File description:
** Federation
*/

#include "Borg.hpp"

/* Borg::Ship */
Borg::Ship::Ship() {
    Borg::Ship::displayInfo(
        "We are the Borgs. Lower your shields and surrender yourselves "
        "unconditionally.\n"
        "Your biological characteristics and technologies will be "
        "assimilated.\n"
        "Resistance is futile.");
}

void Borg::Ship::setupCore(WarpSystem::Core *core) { _core = core; }

void Borg::Ship::checkCore() {
    Borg::Ship::displayInfo(
        _core->checkReactor()->isStable() ? "Everything is in order."
                                          : "Critical failure imminent.");
}
