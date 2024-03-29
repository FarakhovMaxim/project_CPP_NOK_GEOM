#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>

int r() {
    int num = rand() % 10 + 1;
    int n = rand() % 5;
    std::cout << "Задание: ";
    std::vector<int> data{};
    for (int i = 0; i < 5; i++ ) {
        if (i == n) {
            data[i] = -1;
        }
        else {
            if (i == 0) {
                data.push_back(num);
            } else {
                data.push_back(pow(num, i + 1));
            }
        }
    }
    for (int i = 0; i <= data.size(); i++) {
        if (i == n) {
            std::cout<<"?" << " ";
        } else {
            std::cout<<data[i] << " ";
        }

    }
    std::cout<< std::endl;
    return pow(num, n + 1);
}

int geom() {
    std::cout << "Добро пожаловать в игру \"Мозговые игры\"!" << std::endl;
    std::cout << "Какое имя вы бы хотели?" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Привет, " << name << "!" << std::endl;
    std::cout << "Найдите число, которое пропущено в прогрессии." << std::endl;
    int answers_sum = 0;
    int ans, input_ans;
    while (answers_sum != 3) {
        ans = r();
        std::cin >> input_ans;
        if (ans == input_ans) {
            std::cout << "Правильно!" << std::endl;
            answers_sum += 1;
        } else {
            std::cout << "'" << input_ans << "'" << "неправильный ответ, давайте попробуем заново. " << "Правильный ответ: " << ans << std::endl;
            answers_sum = 0;
        }
    }
    std::cout << "Поздравления, " << name;
    return 1;
}
