#include "tiger.hpp"

// Implement this (visitor pattern)
void Tiger::accept(Visitor &visitor)
{
    // fortæller at visitoren besøger en tiger og ikke bare et animal
    visitor.visit(*this);
}

// Implement this (Observer part)
void Tiger::scratch_back()
{
    // fortæller at tigeren er blevet kløet
 notify(AnimalEvent::TigerScratched);
}