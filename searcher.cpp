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
    cout << "Tu solucion ha sido registrada correctamente, revisa tu correo para leer la retroalimentacion de tu proyecto" << endl;
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
        cout<<"[2] Aceptar un reto."<<endl;
        cout<<"[3] Cerrar sesion."<<endl;
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
            case 3:
                system("cls");
                cout<<"Sesion finalizada."<<endl;
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