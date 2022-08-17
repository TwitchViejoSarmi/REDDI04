#include "libraries.h"
class Days {
    private:
        string steps;
        float subbudget;
    public:
        //Getter functions.
        string GetSteps() {
            return steps;
        }
        float GetSubbudget() {
            return subbudget;
        }

        //Setter functions.
        void SetSteps(string a) {
            steps = a;
        }
        void SetSubbudget(float a) {
            subbudget = a;
        }              
};

class Solution {
    private:
        string title;
        vector<Days> steps;
    public:
        //Getter functions.
        string GetTitle() {
            return title;
        }
        vector<Days> GetSteps() {
            return steps;
        }

        //Setter functions.
        void SetTitle(string a) {
            title = a;
        }
        void SetSteps(vector<Days> a) {
            steps = a;
        }

        void printSolution() {
            cout << "------------------------------------------" << endl;
            cout<< "Titulo del reto: " << title << endl;
            for (int i = 0; i < sizeof(steps); i++) {
                cout << "Mes " << i + 1 << ":" <<endl;
                cout << steps[i].GetSteps() << endl;
                cout << "Parte del presupuesto usado: $" << steps[i].GetSubbudget();
            }
            cout << "------------------------------------------" << endl;
        }
        void append(Days day) {
            steps.push_back(day);
        }
        void reset() {
            steps.clear();
        }
};

class Searcher {
    private:
        string user;
        string password;
        string name;
        string role;
        vector<Solution> jobs;
    public:
        //Getter functions.
        string GetUser() {
            return name;
        }
        string GetPassword() {
            return name;
        }
        string GetName() {
            return name;
        }
        string GetRole() {
            return role;
        }
        vector<Solution> GetJobs() {
            return jobs;
        }

        //Setter functions.
        void SetUser(string a) {
            user = a;
        }
        void SetPassword(string a) {
            password = a;
        }
        void SetName(string a) {
            name = a;
        }
        void SetRole(string a) {
            role = a;
        }
        void SetJobs(vector<Solution> a) {
            jobs = a;
        }

        void append(Solution a) {
            jobs.push_back(a);
        }
        void remove(int a) {
            jobs.erase(jobs.begin() + (a - 1));
        }
        void printJobs() {
            for (int i = 0; i < sizeof(jobs); i++) {
                jobs[i].printSolution();
            }
        }
};

class Searchers {
    private:
        vector<Searcher> searchers;
    public:
        //Getter functions.
        vector<Searcher> GetSearchers() {
            return searchers;
        }

        //Setter functions.
        void SetSearchers(vector<Searcher> a) {
            searchers = a;
        }

        Searcher act_user;
        bool InSearchers(string user, string password) {
            for (int i = 0; i < sizeof(searchers); i++) {
                if (user == searchers[i].GetUser() && password == searchers[i].GetPassword()) {
                    act_user = searchers[i];
                    cout<<"Sesion iniciada correctamente."<<endl;
                    system("pause");
                    return true;
                }
            }

            cout<<"Error al acceder al sistema!"<<endl;
            system("pause");

            
            return false;
        }
};

int searcher();