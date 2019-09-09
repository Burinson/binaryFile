#include "file.h"

File::File()
{

}

void File::add()
{
    cout << "Nombre: ";
    cin >> name;
    cout << "Gremio: ";
    cin >> guild;
    cout << "Género: ";
    cin >> gender;
    cout << "Tipo: ";
    cin >> type;
    Character c(name, guild, gender, type);
    fstream file("characters.bin", ios::out | ios::binary | ios::app);
    if (file.fail())
        cerr << "Hubo un error escribiendo el archivo de personajes" << endl;
    file.write(reinterpret_cast<char *>(&c), sizeof(c));
    file.close();
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
