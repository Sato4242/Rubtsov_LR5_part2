#include <iostream>
#include <string>
using namespace std;

int main() {
    int K;
    int D;

    // Ввод натурального числа K
    cout << "Введите натуральное число K: ";
    cin >> K;

    // Ввод цифры D (1-9)
    do {
        cout << "Введите цифру D (1-9): ";
        cin >> D;
    } while (D < 1 || D > 9);

    // Добавление цифры D справа
    int rightAdded = K * 10 + D;
    cout << "Число с добавленной справа цифрой: " << rightAdded << endl;

    // Добавление цифры D слева
    string leftAdded = to_string(D) + to_string(K);
    cout << "Число с добавленной слева цифрой: " << leftAdded << endl;

    return 0;
}