#include "character.h"

Character::Character()
{

}

void Character::show()
{

    cout << "Nombre: " << name << endl;
    cout << "Gremio: " << guild << endl;
    cout << "Género: " << gender << endl;
    cout << "Tipo: " << type << endl;
    cout << "Nivel: " << level << endl;
    cout << "Experiencia: " << exp << endl;
}

bool Character::is(char *name)
{
    return strcmp(this->name, name) == 0;
}

Character::Character(char *name, char *guild, char *gender, char *type)
{
    strcpy(this->name, name);
    strcpy(this->guild, guild);
    strcpy(this->gender, gender);
    strcpy(this->type, type);
    this->level = 1;
    this->exp = 0;
}







