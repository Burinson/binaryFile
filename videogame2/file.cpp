#include "file.h"

File::File()
{

}

void File::add()
{
    ofstream file("characters.bin", ios::binary | ios::app | ios::out);
    if (file.fail())
        cerr << "Hubo un error escribiendo en el archivo" << endl;

    char name[50];
    char guild[50];
    char gender[10];
    char type[50];
    cout << "Nombre: ";
    cin >> name;
    cout << "Gremio: ";
    cin >> guild;
    cout << "Género: ";
    cin >> gender;
    cout << "Tipo: ";
    cin >> type;
    Character c;
    c = Character(name, guild, gender, type);

    file.write(reinterpret_cast<char *>(&c), sizeof(Character));

    file.close();


}

void File::authenticate(char * search)
{
    ifstream file("characters.bin", ios::binary | ios::in);
    Character c;
    char name[50];
    cin >> name;
    if (file.fail())
        cerr << "No existe este archivo" << endl;
    else {
       file.seekg(0);
       while(file.read(reinterpret_cast<char *>(&c), sizeof(Character))) {
            if(c.is(name)) {
                for(int i = 0; i < 50; ++i)
                    search[i] = name[i];
                return;
            }
       }
       char * novalue = "NaN";
       for(int i = 0; i < 3; ++i) {
           search[i] = novalue[i];
       }
    }
    file.close();
}

void File::modify(char *searchName)
{
    ifstream file("characters.bin", ios::binary | ios::in);
    Character c;
    if (file.fail()) {
        cerr << "No existe este archivo" << endl;
    } else {
        char name[50];
        char guild[50];
        char gender[10];
        char type[50];
        int level;
        int exp;
        file.seekg(0);
        ofstream aux("aux.bin", ios::binary | ios::out | ios::app);
           while(file.read(reinterpret_cast<char *>(&c), sizeof(Character))) {
               if (strcmp(c.name, searchName) == 0) {
                   c.show();
                   cout << "Ingrese los nuevos datos a modificar" << endl;
                   cout << "Nombre: ";
                   cin >> name;
                   cout << "Gremio: ";
                   cin >> guild;
                   cout << "Género: ";
                   cin >> gender;
                   cout << "Tipo: ";
                   cin >> type;
                   cout << "Nivel: ";
                   cin >> level;
                   cout << "Experiencia: ";
                   cin >> exp;
                   c = Character(name, guild, gender, type);
                   c.level = level;
                   c.exp = exp;
                   aux.write(reinterpret_cast<char *>(&c), sizeof(Character));
               } else {
                   aux.write(reinterpret_cast<char *>(&c), sizeof(Character));
               }
           }
       aux.close();
    }
    file.close();

    std::remove("characters.bin");
    std::rename("aux.bin", "characters.bin");
}

void File::show()
{
    ifstream file("characters.bin", ios::binary | ios::in);
    Character c;
    if (file.fail())
        cerr << "No existe este archivo" << endl;
    cout << "----------------------------" << endl;
    file.seekg(0);
   while(file.read(reinterpret_cast<char *>(&c), sizeof(Character))) {
        c.show();

        cout << "----------------------------" << endl;

   }
    file.close();
}

void File::remove()
{

}

void File::complete()
{

}
