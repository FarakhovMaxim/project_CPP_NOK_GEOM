#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file;
    int i;
    cout << "Добро пожаловать!" << endl;
    cout << "Введите 0, если хотите запустить НОК" << endl;
    cout << "Введите 1, если хотите запустить ГЕОМЕТРИЧЕСКАЯ ПРОГРЕССИЯ" << endl;
    if (i == 0) {
        file.open("nok.cpp");
    } else if (i == 1) {
        file.open("geom.cpp");
    }
}