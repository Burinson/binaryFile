#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <cstring>
using namespace std;
class Character
{
public:
    friend class File;
    Character();
    void show();
    bool is(char *name);
    Character(char* name, char* guild, char* gender, char* type);

private:
//    struct Quest
//    {
//        string name;
//        int level;
//        int exp;
//    } quest;
//    struct Weapon
//    {
//        string name;
//        int level;
//        int lethality;
//    } weapon;
    char name[50];
    char guild[50];
    char gender[10];
    char type[50];
    int exp;
    int level;
//    map<Weapon, int> inventory;
//    vector<Quest> log;
};

#endif // CHARACTER_H
