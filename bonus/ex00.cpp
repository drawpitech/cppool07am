#include "../Federation.hpp"

int main() {
    Federation::Starfleet::Ship UssJanissary(289, 132, "Janissary", 6);
    Federation::Ship Independent(150, 230, "Nomad");
    WarpSystem::QuantumReactor QR;
    WarpSystem::QuantumReactor QR2;
    WarpSystem::Core core(&QR);
    WarpSystem::Core core2(&QR2);
    UssJanissary.setupCore(&core);
    UssJanissary.checkCore();
    Independent.setupCore(&core2);
    Independent.checkCore();
    QR.setStability(false);
    QR2.setStability(false);
    UssJanissary.checkCore();
    Independent.checkCore();
    return 0;
}
