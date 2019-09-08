#include "character.h"

Character::Character()
{

}

string Character::getName() const
{
    return name;
}

void Character::setName(const string &value)
{
    name = value;
}

string Character::getGuild() const
{
    return guild;
}

void Character::setGuild(const string &value)
{
    guild = value;
}

string Character::getGender() const
{
    return gender;
}

void Character::setGender(const string &value)
{
    gender = value;
}

string Character::getType() const
{
    return type;
}

void Character::setType(const string &value)
{
    type = value;
}

size_t Character::getExp() const
{
    return exp;
}

void Character::setExp(const size_t &value)
{
    exp = value;
}

size_t Character::getLevel() const
{
    return level;
}

void Character::setLevel(const size_t &value)
{
    level = value;
}

Character::Character(string name, string guild, string gender, string type)
{
    this->name = name;
    this->guild = guild;
    this->gender = gender;
    this->type = type;
    this->level = 1;
    this->exp = 0;
}

Character::quest::quest(string name)
{
    this->name = name;
    this->level = 1;
    this->exp = 100;
}

Character::weapon::weapon(string name)
{
    this->name = name;
    this->level = 1;
    this->lethality = 20;
}
