#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    double p = 0.5;
    double rnd;
    char ch = 's';
    string answer;
    while (ch == 's') {
        cout << "Enter your answer: ";
        cin >> answer;
        rnd = (double)(rand())/RAND_MAX;
        cout << "rnd - " << rnd << endl;
        rnd < p ? cout << "Yes\n" : cout << "No\n";
        cout << "Press 's' to begin or another symbol to exit.";
        cin >> ch;
    } 
}

