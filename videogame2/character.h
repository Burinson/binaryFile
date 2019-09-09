#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
class Character
{
public:
    Character();
    string getName() const;
    void setName(const string &value);

    string getGuild() const;
    void setGuild(const string &value);

    string getGender() const;
    void setGender(const string &value);

    string getType() const;
    void setType(const string &value);

    size_t getExp() const;
    void setExp(const size_t &value);

    size_t getLevel() const;
    void setLevel(const size_t &value);

    Character(string name, string guild, string gender, string type);

private:
    struct quest
    {
        string name;
        size_t level;
        size_t exp;
        quest(string name);
    };
    struct weapon
    {
        string name;
        size_t level;
        size_t lethality;
        weapon(string name);
    };
    string name;
    string guild;
    string gender;
    string type;
    size_t exp;
    size_t level;
    map<weapon, size_t> inventory;
    vector<quest> log;
};

#endif // CHARACTER_H
