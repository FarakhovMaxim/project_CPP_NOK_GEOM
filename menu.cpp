#include <iostream>
#include "nok.cpp"
#include "geom.cpp"
using namespace std;

int main() {
    int i;
    cout << "Добро пожаловать!" << endl;
    cout << "Введите 0, если хотите запустить НОК" << endl;
    cout << "Введите 1, если хотите запустить ГЕОМЕТРИЧЕСКАЯ ПРОГРЕССИЯ" << endl;
    cin >> i;
    if (i == 0) {
        nok_main();
    } else if (i == 1) {
        geom();
    }
}
