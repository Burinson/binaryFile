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
        switch(op)
        {
            case 1:
            {
            f->add();
            break;
            }
            case 2:
            {
            f->authenticate();
            break;
            }
            case 3:
            {
            f->remove();
            break;
            }
            default:
            {
            cout << "Opción inválida" << endl;
            }
        }

    } while(op != 0);
}
