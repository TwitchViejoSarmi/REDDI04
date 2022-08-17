#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum status_e{
    NOT_SOLVED = 0,
    IN_REVIEW = 1,
    SOLVED = 2,
};

class Problem {
    private:
        string company;
        string title;
        string description;
        float budget;
        int time;
        status_e status;
    public:

        //Getter functions.
        string GetCompany() {
            return company;
        }
        string GetTitle() {
            return title;
        }
        string GetDesc() {
            return description;
        }
        float GetBudget() {
            return budget;
        }
        int GetTime() {
            return time;
        }
        status_e GetStatus() {
            return status;
        }

        //Setter functions.
        void SetCompany(string a) {
            company = a;
        }
        void SetTitle(string a) {
            title = a;
        }
        void SetDesc(string a) {
            description = a;
        }
        void SetBudget(float a) {
            budget = a;
        }
        void SetTime(int a) {
            time = a;
        }
        void SetStatus(status_e a) {
            status = a;
        }
};

class Problems {
    private:
        vector<Problem> problems;
    public:
        //Getter functions.
        vector<Problem> GetProblems() {
            return problems;
        }

        //Setter functions.
        void SetProblems(vector<Problem> a) {
            problems = a;
        }

        void printProblems() {
            for (int i = 0; i < sizeof(problems); i++) {
                cout << "------------------------------------------" << endl;
                cout << "Reto " << i + 1 << ":" << endl;
                cout<< "Companya: " << problems[i].GetCompany() << endl;
                cout<< "Titulo del reto: " << problems[i].GetTitle() << endl;
                cout<< "Descripcion del reto: " << problems[i].GetDesc() << endl;
                cout<< "Presupuesto: $" << problems[i].GetBudget() << endl;
                cout<< "Tiempo: " << problems[i].GetTime() << endl;
                cout<< "Estado del reto: ";
                if (problems[i].GetStatus() == NOT_SOLVED) {
                    cout << "Sin resolver" << endl;
                }
                else {
                    cout << "En proceso de verificacion" << endl;
                }
                cout << "------------------------------------------" << endl;
            }
        }
};