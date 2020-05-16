#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    map <double, string> answers = {{0.2, "Yes"},
                                    {0.4, "No"},
                                    {0.6, "May be"},
                                    {0.8, "Not sure"},
                                    {1, "Probably"}};

    double rnd;
    char ch = 's';
    string answer;
    while (ch == 's') {
        cout << "Enter your answer: ";
        cin >> answer;
        rnd = (double)(rand())/RAND_MAX + 0.000001;
        double A = rnd;
        double start = 0;

        while(A > 0)
        {
            A = rnd;
            start += 0.2;
            A -= start;
        }

        switch ((int)(start*10.0))
        {
            case 2:
                cout << answers[0.2] << endl;
                break;
            case 4:
                cout << answers[0.4] << endl;
                break;
            case 6:
                cout << answers[0.6] << endl;
                break;
            case 8:
                cout << answers[0.8] << endl;
                break;
            case 10:
                cout << answers[1] << endl;
                break;
            default:
                cout << "Error!";
                break;
        }
        cout << "Press 's' to begin or another symbol to exit.";
        cin >> ch;
    } 

    return 0;
}

