#include "menu.h"
Menu::Menu()
{

}

void Menu::show()
{
    File file;
    int op;
    do
    {
        cout << "1) Agregar nuevo personaje" << endl
             << "2) Acceder a un personaje" << endl
             << "3) Eliminar personaje" << endl
             << "4) Mostrar personajes" << endl
             << "0) Salir" << endl;
        cin >> op;
        switch(op)
        {
            case 1:
            {
            file.add();
            break;
            }
            case 2:
            {
            char name[50];
            file.authenticate(name);
            if (strcmp(name, "NaN") != 0) {
                int op2;
                do {
                    cout << "1) Modificar personaje" << endl
                         << "2) Completar misión" << endl
                         << "0) Salir" << endl;
                    cin >> op2;
                    switch(op2)
                    {
                    case 1:
                    {
                        file.modify(name);
                        break;
                    }
                    }
                } while(op2 != 0);
            } else {
                cout << "Este personaje no existe" << endl;
            }
            break;
            }
            case 3:
            {
            file.remove();
            break;
            }
            case 4:
            {
            file.show();
            break;
            }
        }

    } while(op != 0);
}
