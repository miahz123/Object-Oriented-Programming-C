/***
 * CSE 2010 Fall 2023
 * Lab #6
 * Jeremiah Rivera 007634309
 * 11/27/2023
 *
 * We will derive a class from a base class and understand how member functions and variables can be passed down to the derived class while applying virtual and overloaded functions to practice polymorphisms.
 *
 * Creating my own UML diagram for my own pokemon was a struggle. I solved it by following the structure for UML very closely.
 *
***/

#include <iostream>
#include "Charmander.h"
#include "Vaporeon.h"
using namespace std;

int main()
{  
    // Charmander first = Charmander();
    vector<string> pokemonType;
    pokemonType.push_back("Fire");

    cout << "-------Constructor Created---------\n";
    //Charmander charlie = Charmander("Charlie", 100, 4, 4, pokemonType);
    Vaporeon Sapphire = Vaporeon("Sapphire", 130, 65, 60, pokemonType);

    // Charmander
    cout << "\n-------Direct Speak---------\n";
    //charlie.speak();
    Sapphire.speak();
    
    // Pokemon pointer to Vaporeon
   // Pokemon * p1 = &charlie ;
    Pokemon * p1 = &Sapphire ;
    //cout << "\n------- Speak called from Pokemon Pointer---------\n";
    (*p1).speak();

    // Vaporeon pointer to Vaporeon
    Vaporeon * c1 = &Sapphire ;
    cout << "\n------- Speak called from Sapphire Pointer---------\n";
    (*c1).speak();

    // Vaporeon
    cout << "\n------- Print Stats---------\n";
    //charlie.printStats();
    Sapphire.printStats();
}

