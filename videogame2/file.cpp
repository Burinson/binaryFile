#include "file.h"

File::File()
{

}

void File::add()
{
    cout << "Nombre: " << endl;
    cin >> name;
    cout << "Gremio: " << endl;
    cin >> guild;
    cout << "Género: " << endl;
    cin >> gender;
    cout << "Tipo: " << endl;
    cin >> type;
    c = new Character(name, guild, gender, type);
}

bool File::authenticate()
{

}

void File::modify()
{

}

void File::show()
{

}

void File::remove()
{

}

void File::complete()
{

}
