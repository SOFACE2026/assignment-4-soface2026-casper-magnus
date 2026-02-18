#include "subject.hpp"
#include <algorithm>

// Implement this (Observer part)
void Subject::attach(Observer *subscriber)
{
    // tilføjer en pointer til en observer til subscriber vectoren
    subscribers.push_back(subscriber);
}

// Implement this (Observer part)
void Subject::detach(Observer *subscriber)
{

    // vi detacher vores subscriber ved at fjerne den fra vores vector af subscribers. Vi bruger std::remove for at flytte alle elementer, der ikke er lig med subscriber, til begyndelsen af vectoren, og derefter sletter vi de "fjernede" elementer ved at kalde erase.
    auto it = std::remove(subscribers.begin(), subscribers.end(), subscriber);
    subscribers.erase(it, subscribers.end());
}

// Implement this (Observer part)
void Subject::notify(AnimalEvent event)
{
    // giver alle subscribers beskeder om hændelser ved dyrene
    for (Observer *obs : subscribers){
        obs->update(event);
    }
}