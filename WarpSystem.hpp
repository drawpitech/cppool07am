/*
** EPITECH PROJECT, 2024
** ppool07am
** File description:
** Federation
*/

#ifndef PPOOL07AM_WARPSYSTEM_HPP
#define PPOOL07AM_WARPSYSTEM_HPP

namespace WarpSystem {
class QuantumReactor {
  public:
    bool isStable() const { return _stability; }
    void setStability(bool stability) { _stability = stability; }

  private:
    bool _stability = true;
};
class Core {
  public:
    Core(QuantumReactor *core) : _coreReactor(core) {}

    QuantumReactor *checkReactor() const { return _coreReactor; }

  private:
    QuantumReactor *_coreReactor;
};
} // namespace WarpSystem

#endif /* PPOOL07AM_WARPSYSTEM_HPP */
