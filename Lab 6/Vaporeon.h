#ifndef VAPOREON_H
#define VAPOREON_H

#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Vaporeon : public Pokemon{
    public:
        // --------------- Constructors --------------- 
        Vaporeon();
        Vaporeon(string name, int hp, int att, int def, vector<string> t);
        // --------------- Mutator Functions --------------- 
        void speak()/* override */; 
        void printStats()/*override*/;
    private:
        vector<string> skills;

};
#endif

