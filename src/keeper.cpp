#include "keeper.hpp"
#include "fish.hpp"
#include "tiger.hpp"
#include "monkey.hpp"
// Implement this (visitor part)
void Keeper::visit(Monkey &monkey)
{
    monkey.feed_banana();
}

// Implement this (visitor part)
void Keeper::visit(Tiger &tiger)
{
    tiger.scratch_back();
}

// Implement this (visitor part)
void Keeper::visit(Fish &fish)
{
    fish.clean_teeth();
}