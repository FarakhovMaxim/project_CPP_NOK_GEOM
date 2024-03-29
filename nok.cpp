#include <iostream>
#include <cstdlib>

int nok(int a, int b)
{
    int m = a * b;
    while (a != 0 && b != 0) {
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }
    return m / (a + b);
}

int nok_main() {
    int a, b, c, input_answer, answer;

    std::cout << "Добро пожаловать в игру \"Мозговые игры\"!" << std::endl;
    std::cout << "Какое имя вы бы хотели?" << std::endl;
    std::string name;
    std::cin >> name;

    std::cout << "Привет, " << name << "!" << std::endl;
    std::cout << "Найдите наименьшее общее кратное данным числам." << std::endl;
    int answers_sum = 0;
    while (answers_sum != 3) {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;
        c = rand() % 100 + 1;
        std::cout << "Вопрос: " << a << " " << b << " " << c << std::endl;
        std::cout << "Ваш ответ: ";
        std::cin >> input_answer;
        answer = nok(nok(a, b), nok(b, c));
        if (input_answer == answer) {
            std::cout << "Правильно!" << std::endl;
            answers_sum += 1;
        } else {
            std::cout << "'" << input_answer << "'" << "неправильный ответ, давайте попробуем заново. " << "Правильный ответ: " << answer << std::endl;
            answers_sum = 0;
        }
    }
    std::cout << "Поздравления, " << name;
}
