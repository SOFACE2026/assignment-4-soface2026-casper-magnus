#include "tourist.hpp"

// Implement this (visitor pattern)
void Tourist::visit(Monkey &monkey)
{
    // registrer at turisten har besøgt aben
    visited.push_back("monkey");
}

// Implement this (visitor pattern)
void Tourist::visit(Tiger &tiger)
{
    // registrer at turisten har besøgt tigeren
     visited.push_back("tiger");
}

// Implement this (visitor pattern)
void Tourist::visit(Fish &fish)
{
    // registrer at turisten har besøgt fisken
     visited.push_back("fish");
}

std::vector<std::string> Tourist::list_visited()
{
    // returnerer dyrene turisten har besøgt
    return visited;
}