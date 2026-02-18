#include "keeper.hpp"
#include "fish.hpp"
#include "tiger.hpp"
#include "monkey.hpp"
// Implement this (visitor part)
void Keeper::visit(Monkey &monkey)
{
    // handlingen med at fodre aben
    monkey.feed_banana();
}

// Implement this (visitor part)
void Keeper::visit(Tiger &tiger)
{
    // handlingen med at klø tigeren på ryggen
    tiger.scratch_back();
}

// Implement this (visitor part)
void Keeper::visit(Fish &fish)
{
    // handlingen med at rense fiskens tænder
    fish.clean_teeth();
}