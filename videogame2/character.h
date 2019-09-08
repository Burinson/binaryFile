#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include "/home/uriel/Desktop/macros.h"
using namespace std;

class Character
{
public:
    Character();
private:
    struct quest
    {
        string name;
        size_t level;
        size_t exp;
    };
    struct weapon
    {
        string name;
        size_t level;
        size_t lethality;
    };

    string name;
    string guild;
    string gender;
    string type;
    size_t exp;
    map<weapon, size_t> inventory;
    vector<quest> log;

};

#endif // CHARACTER_H
