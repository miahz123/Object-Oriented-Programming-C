#include <iostream>
#include <stdio.h>
#include "Vaporeon.h"

/**
 * @brief Construct a new Vaporeon:: Vaporeon object
 * 
 */
Vaporeon::Vaporeon() : Pokemon() {
    type.push_back("Water");
    skills.push_back("Water Absorb");
    skills.push_back("Hydration");

    cout << "Default Constructor (Vaporeon)\n";
}

/**
 * @brief Construct a new Vaporeon:: Vaporeon object
 * 
 * @param name 
 * @param hp 
 * @param att 
 * @param def 
 * @param t 
 */
Vaporeon::Vaporeon(string name, int hp, int att, int def, vector<string> t) : Pokemon(name, hp, att, def, t) {
    type.push_back("Water");
    skills.push_back("Water Absorb");
    skills.push_back("Hydration");

    cout << "Overloaded Default Constructor (Vaporeon)\n";
}

/**
 * @brief says what a Vaporeon says
 * 
 */
void Vaporeon::speak(){
    cout << "arf arf\n";
}

/**
 * @brief calls printStats from the parent class (Pokemon) and appends the skills used for Vaporeon
 * 
 */
void Vaporeon::printStats(){
    Pokemon::printStats();
    cout << "Skills: ";
    for(int i = 0; i < skills.size(); i++){
        cout << skills[i] << "\t";
    }
    cout << endl;
}