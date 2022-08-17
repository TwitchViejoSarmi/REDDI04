#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef enum Status{
    NOT_SOLVED = 0,
    IN_REVIEW = 1,
    SOLVED = 2,
}status_e;

class Problem {
    private:
        string title;
        string description;
        float budget;
        int time;
        status_e status;
    public:
        //Getter functions.
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