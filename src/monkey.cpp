#include "monkey.hpp"

// Implement this (visitor pattern)
void Monkey::accept(Visitor &visitor)
{
    // fortæller at visitoren besøger en Monkey og ikke bare et animal
    visitor.visit(*this);
}

// Implement this (Observer part)
void Monkey::feed_banana()
{
    // fortæller at aben er blevet fodret
    notify(AnimalEvent::MonkeyFed);
}