#include "fish.hpp"

// Implement this (visitor pattern)
void Fish::accept(Visitor &visitor)
{
    // fortæller at visitoren besøger en fish og ikke bare et animal
    visitor.visit(*this);
}

// Implement this (Observer part)
void Fish::clean_teeth()
{
    // fortæller at fisken har fået renset tænder
    notify(AnimalEvent::FishTeethCleaned);
}