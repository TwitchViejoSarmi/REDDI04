#include "searcher.h"
void challenge(Problem problem, Searcher User) {
    Solution challenge;
    Days solperday;
    string solve;
    float subbudget;
    float budgetdisp = problem.GetBudget();
    challenge.SetTitle(problem.GetTitle());

    for (int i = 0; i < problem.GetTime(); i++) {
        cout << "Digite los pasos a seguir en el mes " << i + 1 << ":";
        cin >> solve;
        solperday.SetSteps(solve);
        cout << "Digite la parte del presupuesto a usar: $";
        cin >> subbudget;
        solperday.SetSubbudget(subbudget);
        challenge.append(solperday);
        system("cls");
    }

    User.append(challenge);

}

int searcher() {
    Searchers searchers;
    Problems problems;
    vector<Problem> list_problem;
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
        cout<<"[4] Modificar un reto que estas resolviendo."<<endl;
        cout<<"[5] Borrar un reto."<<endl;
        cout<<"[6] Consultar comentarios."<<endl;
        cout<<"[7] Cerrar sesion."<<endl;
        cout<<"Digite aqui: ";
        cin >> opc;

        switch (opc) {
            case 1:
                system("cls");
                problems.printProblems();
                system("pause");
                break;
            case 2:
                system("cls");
                searchers.act_user.printJobs();
                system("pause");
                break;
            case 3:
                system("cls");
                problems.printProblems();
                int num;
                cout << "Digite el numero del reto a aceptar: ";
                cin >> num;
                if (num - 1 >= 0 && num - 1 < sizeof(problems.GetProblems())) {
                    system("cls");
                    problems.GetProblems().at(num - 1).SetStatus(IN_REVIEW);
                    challenge(problems.GetProblems().at(num - 1), searchers.act_user);
                }
                else {
                    cout << "El reto registrado no se encuentra disponible" << endl;
                }
                
                system("pause");
                break;
            case 4:
                system("cls");
                system("pause");
                break;
            case 5:
                system("cls");
                system("pause");
                break;
            case 6:
                system("cls");
                system("pause");
                break;
            case 7:
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