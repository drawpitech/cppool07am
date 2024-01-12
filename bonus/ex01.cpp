#include "../Borg.hpp"
#include "../Federation.hpp"

int main() {
    Federation::Starfleet::Ship UssJanissary(289, 132, "Janissary", 6);
    Federation::Starfleet::Captain James("James T. Kirk");
    Federation::Starfleet::Ensign Ensign("Pavel Chekov");
    WarpSystem::QuantumReactor QR;
    WarpSystem::QuantumReactor QR2;
    WarpSystem::Core core(&QR);
    WarpSystem::Core core2(&QR2);
    UssJanissary.setupCore(&core);
    UssJanissary.checkCore();
    UssJanissary.promote(&James);
    Borg ::Ship Cube;
    Cube.setupCore(&core2);
    Cube.checkCore();
    return 0;
}
