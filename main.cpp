#include "libraries.h"
#include "searcher.h"

int main() {
    int opc;
    do {
        cout<<"=========================================="<<endl;
        cout<<"          CONECTA CON EL MUNDO            "<<endl;
        cout<<"=========================================="<<endl;

        cout<<"[1] Acceder como investigador."<<endl;
        cout<<"[2] Acceder como empresario."<<endl;
        cout<<"[3] Finalizar programa."<<endl;
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
    }while(opc != 3);
    return 0;
}