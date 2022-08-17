#include "libraries.h"

class Searcher {
    private:
        string user;
        string password;
        string name;
        string role;
        vector<Problem> jobs;
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
        vector<Problem> GetJobs() {
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
        void SetJobs(vector<Problem> a) {
            jobs = a;
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