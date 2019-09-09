#include "menu.h"
Menu::Menu()
{

}

void Menu::show()
{
    int op;
    do
    {
        cout << "1) Agregar nuevo personaje" << endl
             << "2) Acceder a un personaje" << endl
             << "3) Eliminar personaje" << endl
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
            file.authenticate();
            break;
            }
            case 3:
            {
            file.remove();
            break;
            }
            default:
            {
            cout << "Opción inválida" << endl;
            }
        }

    } while(op != 0);
}
