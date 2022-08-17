#include "searcher.h"

int searcher() {
    Searchers searchers;
    string user, password;

    bool user_exists = false;
    do {
        cout<<"Digite su usuario: ";
        getline(cin, user);
        cout<<"Digite su contrasenya: ";
        getline(cin, password);

        user_exists = searchers.InSearchers(user, password);
        system("cls");
    }while(user_exists == false);

    int opc;
    do {
        cout<<"=========================================="<<endl;
        cout<<"BIENVENIDO/A "<< searchers.act_user.GetName() << "    "<<endl;
        cout<<"=========================================="<<endl;

        cout<<"[1] Consultar los retos disponibles."<<endl;
        cout<<"[2] Consultar los retos que estas resolviendo."<<endl;
        cout<<"[3] Aceptar un reto."<<endl;
        cout<<"[4] Borrar un reto."<<endl;
        cout<<"[5] Consultar comentarios."<<endl;
        cout<<"[6] Cerrar sesion."<<endl;
        cout<<"Digite aqui: ";
        cin>>opc;

        switch (opc) {
            case 1:
                system("cls");
                system("pause");
                break;
            case 2:
                system("cls");
                system("pause");
                break;
            case 3:
                system("cls");
                cout<<"Sistema finalizado."<<endl;
                system("pause");
                break;
            default:
                system("cls");
                cout<<"Comando no reconocido, intentelo nuevamente."<<endl;
                system("pause");
                break;
        }
    }while(opc != 6);

    return 0;
}